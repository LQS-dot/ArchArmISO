(*
 * libbrlapi - A library providing access to braille terminals for applications.
 *
 * Copyright (C) 2002-2022 by
 *   Sébastien Hinderer <Sebastien.Hinderer@ens-lyon.org>
 *   Samuel Thibault <Samuel.Thibault@ens-lyon.org>
 * All rights reserved.
 *
 * libbrlapi comes with ABSOLUTELY NO WARRANTY.
 *
 * This is free software, placed under the terms of the
 * GNU Lesser General Public License, as published by the Free Software
 * Foundation; either version 2.1 of the License, or (at your option) any
 * later version. Please see the file LICENSE-LGPL for details.
 *
 * Web Page: http://brltty.app/
 *
 * This software is maintained by Dave Mielke <dave@mielke.cc>.
 *)

(* BrlAPI Interface for the OCaml language *)
(*
Ajouter des fichiers .in
*)

(*
BRLAPI_RELEASE
BRLAPI_MAJOR
BRLAPI_MINOR
BRLAPI_REVISION
Faire un fichier .in: @VAR@ est remplacé par la valeur de VAR
telle que définie dans configure.ac.
*)

(*
BRLAPI_SOCKETPORTNUM
BRLAPI_SOCKETPORT (string)
BRLAPI_MAXPACKETSIZE
BRLAPI_MAXNAMELENGTH
BRLAPI_SOCKETPATH
BRLAPI_ETCDIR
BRLAPI_AUTHKEYFILE
BRLAPI_DEFAUTH
Idem que précédemmment
C'est du ni<eau proto. Faut-il binder ?
*)

type settings = {
  auth : string;
  host : string
}

val settings_initializer : settings

type writeArguments = {
  mutable displayNumber : int;
  mutable regionBegin : int;
  mutable regionSize : int;
  text : string;
  attrAnd : int array;
  attrOr : int array;
  mutable cursor : int;
  mutable charset : string
}

val writeArguments_initializer : writeArguments

type handle

val max_packet_size : int

type errorCode =
  | SUCCESS
  | NOMEM
  | TTYBUSY
  | DEVICEBUSY
  | UNKNOWN_INSTRUCTION
  | ILLEGAL_INSTRUCTION
  | INVALID_PARAMETER
  | INVALID_PACKET
  | CONNREFUSED
  | OPNOTSUPP
  | GAIERR of int
  | LIBCERR of Unix.error
  | UNKNOWNTTY
  | PROTOCOL_VERSION
  | EOF
  | EMPTYKEY
  | DRIVERERROR
  | AUTHENTICATION
  | Unknown of int

type error = {
  brlerrno : int;
  libcerrno : int;
  gaierrno : int;
  errfun : string;
}

external errorCode_of_error :
  error -> errorCode = "brlapiml_errorCode_of_error"

external strerror :
  error -> string = "brlapiml_strerror"

exception Brlapi_error of error
exception Brlapi_exception of errorCode * int32 * string

external openConnection :
  settings -> Unix.file_descr * settings = "brlapiml_openConnection"
external openConnectionWithHandle :
  settings -> handle = "brlapiml_openConnectionWithHandle"
external closeConnection :
  ?h:handle -> unit -> unit = "brlapiml_closeConnection"
(*
val expandHost : string -> string * string
Idem: proto
*)
external getDriverName :
  ?h:handle -> unit -> string = "brlapiml_getDriverName"
external getModelIdentifier :
  ?h:handle -> unit -> string = "brlapiml_getModelIdentifier"
external getDisplaySize :
  ?h:handle -> unit -> int * int = "brlapiml_getDisplaySize"

external enterTtyMode :
  ?h:handle -> int -> string -> int = "brlapiml_enterTtyMode"
val enterTtyModeWithPath :
  ?h:handle -> int array -> string -> int
external leaveTtyMode :
  ?h:handle -> unit -> unit = "brlapiml_leaveTtyMode"
external setFocus :
  ?h:handle -> int -> unit = "brlapiml_setFocus"

external writeText :
  ?h:handle -> int -> string -> unit = "brlapiml_writeText"
(* Arg optionnel pour curseur ? *)
external writeDots :
  ?h:handle -> int array -> unit = "brlapiml_writeDots"
external write :
  ?h:handle -> writeArguments -> unit = "brlapiml_write"

(*
BRLAPI_KEYCODE_MAX
Les constantes pour travailler sur les flags de touches ?
Les KEY_SYM ?
Oui: pour être cohérent avec le fait de fournir le int64
Flags: entiers.
*)

(* val getKeyName : expandedKeyCode -> string *)

(*
brlapi_dotNumberToBit
brlapi_dotBitToNumber
Unicode ?
Oui, utile pour les key_sym
*)

external readKey :
  ?h:handle -> unit -> int64 option = "brlapiml_readKey"
external waitKey :
  ?h:handle -> unit -> int64 = "brlapiml_waitKey"
external readKeyWithTimeout :
  ?h:handle -> int -> int64 option = "brlapiml_readKeyWithTimeout"

type expandedKeyCode = {
  type_ : int32;
  command : int32;
  argument : int32;
  flags : int32
}

external expandKeyCode :
  ?h:handle -> int64 -> expandedKeyCode = "brlapiml_expandKeyCode"

type rangeType =
  | RT_all
  | RT_type
  | RT_command
  | RT_key
  | RT_code

external ignoreKeys :
  ?h:handle -> rangeType -> int64 array -> unit = "brlapiml_ignoreKeys"
external acceptKeys :
  ?h:handle -> rangeType -> int64 array -> unit = "brlapiml_acceptKeys"
external ignoreAllKeys :
  ?h:handle -> unit = "brlapiml_ignoreAllKeys"
external acceptAllKeys :
  ?h:handle -> unit = "brlapiml_acceptAllKeys"  
external ignoreKeyRanges :
  ?h:handle -> (int64 * int64) array -> unit = "brlapiml_ignoreKeyRanges"
external acceptKeyRanges :
  ?h:handle -> (int64 * int64) array -> unit = "brlapiml_acceptKeyRanges"

external enterRawMode :
  ?h:handle -> string -> unit = "brlapiml_enterRawMode"
external leaveRawMode :
  ?h:handle -> unit -> unit = "brlapiml_leaveRawMode"
external sendRaw :
  ?h:handle -> string -> int = "brlapiml_sendRaw"
external recvRaw :
  ?h:handle -> unit -> string = "brlapiml_recvRaw"

external suspendDriver :
  ?h:handle -> string -> unit = "brlapiml_suspendDriver"
external resumeDriver :
  ?h:handle -> unit -> unit = "brlapiml_resumeDriver"

module type KEY = sig
  type key
  val key_of_int64 : int64 -> key
  val int64_of_key : key -> int64
end

module MakeKeyHandlers (M1 : KEY) : sig
  type key = M1.key
  val readKey : ?h:handle -> unit -> key option
  val waitKey : ?h:handle -> unit -> key

  val ignoreKeys : ?h:handle -> rangeType -> key array -> unit
  val acceptKeys : ?h:handle -> rangeType -> key array -> unit
  val ignoreKeyRanges : ?h:handle -> (key * key) array -> unit
  val acceptKeyRanges : ?h:handle -> (key * key) array -> unit
end
val tty_default : int
val display_default : int
val cursor_leave : int
val cursor_off : int
val rangetype_all : int
val rangetype_type : int
val rangetype_command : int
val rangetype_key : int
val rangetype_code : int
val paramf_local : int
val paramf_global : int
val paramf_self : int
val error_success : int
val error_nomem : int
val error_ttybusy : int
val error_devicebusy : int
val error_unknown_instruction : int
val error_illegal_instruction : int
val error_invalid_parameter : int
val error_invalid_packet : int
val error_connrefused : int
val error_opnotsupp : int
val error_gaierr : int
val error_libcerr : int
val error_unknowntty : int
val error_protocol_version : int
val error_eof : int
val error_emptykey : int
val error_drivererror : int
val error_authentication : int
val error_readonly_parameter : int
val key_max : int64
val key_flags_mask : int64
val key_flags_shift : int
val key_type_mask : int64
val key_type_shift : int
val key_type_cmd : int
val key_type_sym : int
val key_code_mask : int64
val key_code_shift : int
val key_cmd_blk_mask : int64
val key_cmd_blk_shift : int
val key_cmd_arg_mask : int64
val key_cmd_arg_shift : int
val key_sym_backspace : int32
val key_sym_tab : int32
val key_sym_linefeed : int32
val key_sym_escape : int32
val key_sym_home : int32
val key_sym_left : int32
val key_sym_up : int32
val key_sym_right : int32
val key_sym_down : int32
val key_sym_page_up : int32
val key_sym_page_down : int32
val key_sym_end : int32
val key_sym_insert : int32
val key_sym_f1 : int32
val key_sym_f2 : int32
val key_sym_f3 : int32
val key_sym_f4 : int32
val key_sym_f5 : int32
val key_sym_f6 : int32
val key_sym_f7 : int32
val key_sym_f8 : int32
val key_sym_f9 : int32
val key_sym_f10 : int32
val key_sym_f11 : int32
val key_sym_f12 : int32
val key_sym_f13 : int32
val key_sym_f14 : int32
val key_sym_f15 : int32
val key_sym_f16 : int32
val key_sym_f17 : int32
val key_sym_f18 : int32
val key_sym_f19 : int32
val key_sym_f20 : int32
val key_sym_f21 : int32
val key_sym_f22 : int32
val key_sym_f23 : int32
val key_sym_f24 : int32
val key_sym_f25 : int32
val key_sym_f26 : int32
val key_sym_f27 : int32
val key_sym_f28 : int32
val key_sym_f29 : int32
val key_sym_f30 : int32
val key_sym_f31 : int32
val key_sym_f32 : int32
val key_sym_f33 : int32
val key_sym_f34 : int32
val key_sym_f35 : int32
val key_sym_delete : int32
val key_sym_unicode : int32
val param_server_version : int
val param_client_priority : int
val param_driver_name : int
val param_driver_code : int
val param_driver_version : int
val param_device_model : int
val param_device_cell_size : int
val param_display_size : int
val param_device_identifier : int
val param_device_speed : int
val param_device_online : int
val param_retain_dots : int
val param_computer_braille_cell_size : int
val param_literary_braille : int
val param_cursor_dots : int
val param_cursor_blink_period : int
val param_cursor_blink_percentage : int
val param_rendered_cells : int
val param_skip_identical_lines : int
val param_audible_alerts : int
val param_clipboard_content : int
val param_bound_command_keycodes : int
val param_command_keycode_name : int
val param_command_keycode_summary : int
val param_defined_driver_keycodes : int
val param_driver_keycode_name : int
val param_driver_keycode_summary : int
val param_computer_braille_rows_mask : int
val param_computer_braille_row_cells : int
val param_computer_braille_table : int
val param_literary_braille_table : int
val param_message_locale : int
val param_count : int
val param_type_string : int
val param_type_boolean : int
val param_type_uint8 : int
val param_type_uint16 : int
val param_type_uint32 : int
val param_type_uint64 : int
val param_type_keycode : int
val cmd_noop : int32
val cmd_lnup : int32
val cmd_lndn : int32
val cmd_winup : int32
val cmd_windn : int32
val cmd_prdifln : int32
val cmd_nxdifln : int32
val cmd_attrup : int32
val cmd_attrdn : int32
val cmd_top : int32
val cmd_bot : int32
val cmd_top_left : int32
val cmd_bot_left : int32
val cmd_prpgrph : int32
val cmd_nxpgrph : int32
val cmd_prprompt : int32
val cmd_nxprompt : int32
val cmd_prsearch : int32
val cmd_nxsearch : int32
val cmd_chrlt : int32
val cmd_chrrt : int32
val cmd_hwinlt : int32
val cmd_hwinrt : int32
val cmd_fwinlt : int32
val cmd_fwinrt : int32
val cmd_fwinltskip : int32
val cmd_fwinrtskip : int32
val cmd_lnbeg : int32
val cmd_lnend : int32
val cmd_home : int32
val cmd_back : int32
val cmd_return : int32
val cmd_freeze : int32
val cmd_dispmd : int32
val cmd_sixdots : int32
val cmd_slidewin : int32
val cmd_skpidlns : int32
val cmd_skpblnkwins : int32
val cmd_csrvis : int32
val cmd_csrhide : int32
val cmd_csrtrk : int32
val cmd_csrsize : int32
val cmd_csrblink : int32
val cmd_attrvis : int32
val cmd_attrblink : int32
val cmd_capblink : int32
val cmd_tunes : int32
val cmd_autorepeat : int32
val cmd_autospeak : int32
val cmd_help : int32
val cmd_info : int32
val cmd_learn : int32
val cmd_prefmenu : int32
val cmd_prefsave : int32
val cmd_prefload : int32
val cmd_menu_first_item : int32
val cmd_menu_last_item : int32
val cmd_menu_prev_item : int32
val cmd_menu_next_item : int32
val cmd_menu_prev_setting : int32
val cmd_menu_next_setting : int32
val cmd_mute : int32
val cmd_spkhome : int32
val cmd_say_line : int32
val cmd_say_above : int32
val cmd_say_below : int32
val cmd_say_slower : int32
val cmd_say_faster : int32
val cmd_say_softer : int32
val cmd_say_louder : int32
val cmd_switchvt_prev : int32
val cmd_switchvt_next : int32
val cmd_csrjmp_vert : int32
val cmd_paste : int32
val cmd_restartbrl : int32
val cmd_restartspeech : int32
val cmd_offline : int32
val cmd_shift : int32
val cmd_upper : int32
val cmd_control : int32
val cmd_meta : int32
val cmd_time : int32
val cmd_menu_prev_level : int32
val cmd_aspk_sel_line : int32
val cmd_aspk_sel_char : int32
val cmd_aspk_ins_chars : int32
val cmd_aspk_del_chars : int32
val cmd_aspk_rep_chars : int32
val cmd_aspk_cmp_words : int32
val cmd_speak_curr_char : int32
val cmd_speak_prev_char : int32
val cmd_speak_next_char : int32
val cmd_speak_curr_word : int32
val cmd_speak_prev_word : int32
val cmd_speak_next_word : int32
val cmd_speak_curr_line : int32
val cmd_speak_prev_line : int32
val cmd_speak_next_line : int32
val cmd_speak_frst_char : int32
val cmd_speak_last_char : int32
val cmd_speak_frst_line : int32
val cmd_speak_last_line : int32
val cmd_desc_curr_char : int32
val cmd_spell_curr_word : int32
val cmd_route_curr_locn : int32
val cmd_speak_curr_locn : int32
val cmd_show_curr_locn : int32
val cmd_clip_save : int32
val cmd_clip_restore : int32
val cmd_brlucdots : int32
val cmd_brlkbd : int32
val cmd_unstick : int32
val cmd_altgr : int32
val cmd_gui : int32
val cmd_brl_stop : int32
val cmd_brl_start : int32
val cmd_spk_stop : int32
val cmd_spk_start : int32
val cmd_scr_stop : int32
val cmd_scr_start : int32
val cmd_selectvt_prev : int32
val cmd_selectvt_next : int32
val cmd_prnbwin : int32
val cmd_nxnbwin : int32
val cmd_touch_nav : int32
val cmd_speak_indent : int32
val cmd_aspk_indent : int32
val cmd_refresh : int32
val cmd_indicators : int32
val cmd_txtsel_clear : int32
val cmd_txtsel_all : int32
val cmd_host_copy : int32
val cmd_host_cut : int32
val cmd_host_paste : int32
val cmd_gui_title : int32
val cmd_gui_brl_actions : int32
val cmd_gui_home : int32
val cmd_gui_back : int32
val cmd_gui_dev_settings : int32
val cmd_gui_dev_options : int32
val cmd_gui_app_list : int32
val cmd_gui_app_menu : int32
val cmd_gui_app_alerts : int32
val cmd_gui_area_actv : int32
val cmd_gui_area_prev : int32
val cmd_gui_area_next : int32
val cmd_gui_item_frst : int32
val cmd_gui_item_prev : int32
val cmd_gui_item_next : int32
val cmd_gui_item_last : int32
val cmd_say_lower : int32
val cmd_say_higher : int32
val cmd_say_all : int32
val cmd_contracted : int32
val cmd_compbrl6 : int32
val blk_route : int32
val blk_clip_new : int32
val blk_cutbegin : int32
val blk_clip_add : int32
val blk_cutappend : int32
val blk_copy_rect : int32
val blk_cutrect : int32
val blk_copy_line : int32
val blk_cutline : int32
val blk_switchvt : int32
val blk_prindent : int32
val blk_nxindent : int32
val blk_descchar : int32
val blk_setleft : int32
val blk_setmark : int32
val blk_gotomark : int32
val blk_gotoline : int32
val blk_prdifchar : int32
val blk_nxdifchar : int32
val blk_clip_copy : int32
val blk_copychars : int32
val blk_clip_append : int32
val blk_apndchars : int32
val blk_paste_history : int32
val blk_set_text_table : int32
val blk_set_attributes_table : int32
val blk_set_contraction_table : int32
val blk_set_keyboard_table : int32
val blk_set_language_profile : int32
val blk_route_line : int32
val blk_refresh_line : int32
val blk_txtsel_start : int32
val blk_txtsel_set : int32
val blk_selectvt : int32
val blk_alert : int32
val blk_passchar : int32
val blk_passdots : int32
val blk_passat : int32
val blk_passxt : int32
val blk_passps2 : int32
val blk_context : int32
val blk_touch_at : int32
val key_flg_toggle_on : int32
val key_flg_toggle_off : int32
val key_flg_motion_route : int32
val key_flg_motion_scaled : int32
val key_flg_motion_toleft : int32
val key_flg_input_shift : int32
val key_flg_input_upper : int32
val key_flg_input_control : int32
val key_flg_input_meta : int32
val key_flg_input_altgr : int32
val key_flg_input_gui : int32
val key_flg_input_escaped : int32
val key_flg_kbd_release : int32
val key_flg_kbd_emul0 : int32
val key_flg_kbd_emul1 : int32
val dot1 : int
val dot2 : int
val dot3 : int
val dot4 : int
val dot5 : int
val dot6 : int
val dot7 : int
val dot8 : int
val dotc : int
