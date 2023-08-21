��    `        �         (  l   )     �  �  �  b   n  M   �  H     p   h  �   �  q   {  �   �  �   �  �   �  �   �  9   $  #   ^     �     �     �  )   �  	   �  3         4  �   P      �  ,      $   -     R      g     �     �  #   �  !   �          !  <   :  <   w  %   �  %   �                :     P     g     v     �     �     �  �   �  &   �     �     �     �  �     d   �     U     l  $   �  u   �  C     =   b     �  &   �  +   �       (     )   F     p     �    �  (   �  /  �  �   "  }   �"  .   >#  F   m#  "   �#  -   �#     $  
   %$     0$  2   C$  $   v$  ,   �$  '   �$  '   �$     %     %  +   3%     _%     t%     �%     �%     �%     �%     �%  �  �%  �   y'     (  �  .(  |   ,  W   �,  G   �,  v   5-  �   �-  r   P.  �   �.  �   �/  �   �0  �   p1  =   2  &   L2     s2     �2     �2  *   �2     �2  A   �2  !   93  �   [3  ,   �3  0   4  &   P4     w4  $   �4  #   �4  $   �4  (   5  $   ,5     Q5  "   p5  ;   �5  ;   �5  $   6  $   06      U6     v6     �6     �6     �6     �6     �6     7     7  �   ?7  *   �7  !   *8     L8     f8  �  �8  ]   :     f:     �:  &   �:  ~   �:  I   E;  C   �;     �;  !   �;  0   <     B<  (   [<  *   �<     �<     �<  :  �<  .   %A  b  TA  �   �C  �   zD  8   E  D   @E  '   �E  D   �E  $   �E  
   F     "F  2   5F  *   hF  0   �F  $   �F  0   �F     G     &G  .   :G     iG     ~G     �G     �G     �G     �G     �G     B   "   J       M   H   ?      
   2      K   G               %   [           O   (   9                 X   .      8       $                                   1   +   0          3             S       ,         *       =           E          U   <   '   /                         ^       4             C       P   @   ;          ]   T           )   W      	       R       _   7   -   &   N         Z   Y   `      >       A      D   #   5       V   L                F   I   6   Q   !   \   :    
  PID    start at this PID; default is 1 (init)
  USER   show only trees rooted at processes of this user

 
Display a tree of processes.

        killall -l, --list
       killall -V, --version

  -e,--exact          require exact match for very long names
  -I,--ignore-case    case insensitive process name match
  -g,--process-group  kill process group instead of process
  -y,--younger-than   kill processes younger than TIME
  -o,--older-than     kill processes older than TIME
  -i,--interactive    ask for confirmation before killing
  -l,--list           list all known signal names
  -q,--quiet          don't print complaints
  -r,--regexp         interpret NAME as an extended regular expression
  -s,--signal SIGNAL  send this signal instead of SIGTERM
  -u,--user USER      kill only process(es) running as USER
  -v,--verbose        report if the signal was successfully sent
  -V,--version        display version information
  -w,--wait           wait for processes to die
  -n,--ns PID         match processes that belong to the same namespaces
                      as PID
   -4,--ipv4             search IPv4 sockets only
  -6,--ipv6             search IPv6 sockets only
   -C, --color=TYPE    color process by attribute
                      (age)
   -Z, --security-context
                      show security attributes
   -Z,--context REGEXP kill only process(es) having context
                      (must precede other arguments)
   -a, --arguments     show command line arguments
  -A, --ascii         use ASCII line drawing characters
  -c, --compact-not   don't compact identical subtrees
   -g, --show-pgids    show process group ids; implies -c
  -G, --vt100         use VT100 line drawing characters
   -h, --highlight-all highlight current process and its ancestors
  -H PID, --highlight-pid=PID
                      highlight this process and its ancestors
  -l, --long          don't truncate long lines
   -n, --numeric-sort  sort output by PID
  -N TYPE, --ns-sort=TYPE
                      sort output by this namespace type
                              (cgroup, ipc, mnt, net, pid, time, user, uts)
  -p, --show-pids     show PIDs; implies -c
   -s, --show-parents  show parents of the selected process
  -S, --ns-changes    show namespace transitions
  -t, --thread-names  show full thread names
  -T, --hide-threads  hide threads, show only processes
   -u, --uid-changes   show uid transitions
  -U, --unicode       use UTF-8 (Unicode) line drawing characters
  -V, --version       display version information
   udp/tcp names: [local_port][,[rmt_host][,[rmt_port]]]

 %*s USER        PID ACCESS COMMAND
 %s is empty (not mounted ?)
 %s: Invalid option %s
 %s: no process found
 %s: unknown signal; %s -l lists signals.
 (unknown) /proc is not mounted, cannot stat /proc/self/stat.
 Bad regular expression: %s
 CPU Times
  This Process    (user system guest blkio): %6.2f %6.2f %6.2f %6.2f
  Child processes (user system guest):       %6.2f %6.2f %6.2f
 Can't get terminal capabilities
 Cannot allocate memory for matched proc: %s
 Cannot find socket's device number.
 Cannot find user %s
 Cannot open /proc directory: %s
 Cannot open /proc/net/unix: %s
 Cannot open a network socket.
 Cannot open protocol file "%s": %s
 Cannot resolve local port %s: %s
 Cannot stat %s: %s
 Cannot stat file %s: %s
 Copyright (C) 1993-2021 Werner Almesberger and Craig Small

 Copyright (C) 1993-2022 Werner Almesberger and Craig Small

 Copyright (C) 2007 Trent Waddington

 Copyright (C) 2009-2022 Craig Small

 Could not kill process %d: %s
 Error attaching to pid %i
 Invalid namespace PID Invalid namespace name Invalid option Invalid time format Kill %s(%s%d) ? (y/N)  Kill process %d ? (y/N)  Killed %s(%s%d) with signal %d
 Memory
  Vsize:       %-10s
  RSS:         %-10s 		 RSS Limit: %s
  Code Start:  %#-10lx		 Code Stop:  %#-10lx
  Stack Start: %#-10lx
  Stack Pointer (ESP): %#10lx	 Inst Pointer (EIP): %#10lx
 Namespace option requires an argument. No process specification given No processes found.
 No such user name: %s
 PSmisc comes with ABSOLUTELY NO WARRANTY.
This is free software, and you are welcome to redistribute it under
the terms of the GNU General Public License.
For more information about these matters, see the files named COPYING.
 Page Faults
  This Process    (minor major): %8lu  %8lu
  Child Processes (minor major): %8lu  %8lu
 Press return to close
 Process %d not found.
 Process with pid %d does not exist.
 Process, Group and Session IDs
  Process ID: %d		  Parent ID: %d
    Group ID: %d		 Session ID: %d
  T Group ID: %d

 Process: %-14s		State: %c (%s)
  CPU#:  %-3d		TTY: %s	Threads: %ld
 Scheduling
  Policy: %s
  Nice:   %ld 		 RT Priority: %ld %s
 Signal %s(%s%d) ? (y/N)  Specified filename %s does not exist.
 Specified filename %s is not a mountpoint.
 TERM is not set
 Unable to allocate memory for proc_info
 Unable to open stat file for pid %d (%s)
 Unable to scan stat file Unknown local port AF %d
 Usage: fuser [-fIMuvw] [-a|-s] [-4|-6] [-c|-m|-n SPACE]
             [-k [-i] [-SIGNAL]] NAME...
       fuser -l
       fuser -V
Show which processes use the named files, sockets, or filesystems.

  -a,--all              display unused files too
  -i,--interactive      ask before killing (ignored without -k)
  -I,--inode            use always inodes to compare files
  -k,--kill             kill processes accessing the named file
  -l,--list-signals     list available signal names
  -m,--mount            show all processes using the named filesystems or
                        block device
  -M,--ismountpoint     fulfill request only if NAME is a mount point
  -n,--namespace SPACE  search in this name space (file, udp, or tcp)
  -s,--silent           silent operation
  -SIGNAL               send this signal instead of SIGKILL
  -u,--user             display user IDs
  -v,--verbose          verbose output
  -w,--writeonly        kill only processes with write access
  -V,--version          display version information
 Usage: killall [OPTION]... [--] NAME...
 Usage: peekfd [-8] [-n] [-c] [-d] [-V] [-h] <pid> [<fd> ..]
    -8, --eight-bit-clean        output 8 bit clean streams.
    -n, --no-headers             don't display read/write from fd headers.
    -c, --follow                 peek at any new child processes too.
    -t, --tgid                   peek at all threads where tgid equals <pid>.
    -d, --duplicates-removed     remove duplicate read/writes from the output.
    -V, --version                prints version info.
    -h, --help                   prints this help.

  Press CTRL-C to end output.
 Usage: prtstat [options] PID ...
       prtstat -V
Print information about a process
    -r,--raw       Raw display of information
    -V,--version   Display version information and exit
 Usage: pstree [-acglpsStTuZ] [ -h | -H PID ] [ -n | -N type ]
              [ -A | -G | -U ] [ PID | USER ]
   or: pstree -V
 You can only use files with mountpoint options You cannot search for only IPv4 and only IPv6 sockets at the same time You must provide at least one PID. all option cannot be used with silent option. asprintf in print_stat failed.
 disk sleep fuser (PSmisc) %s
 killall: %s lacks process entries (not mounted ?)
 killall: Bad regular expression: %s
 killall: Cannot get UID from process status
 killall: Maximum number of names is %d
 killall: skipping partial match %s(%d)
 paging peekfd (PSmisc) %s
 procfs file for %s namespace not available
 prtstat (PSmisc) %s
 pstree (PSmisc) %s
 running sleeping traced unknown zombie Project-Id-Version: psmisc 23.6-rc1
Report-Msgid-Bugs-To: csmall@dropbear.xyz
PO-Revision-Date: 2022-12-08 16:09+0100
Last-Translator: Sebastian Rasmussen <sebras@gmail.com>
Language-Team: Swedish <tp-sv@listor.tp-sv.se>
Language: sv
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=(n != 1);
X-Bugs: Report translation errors to the Language-Team address.
X-Generator: Poedit 3.2.2
 
  PID    starta vid denna PID; standardvärde är 1 (init)
  ANVÄNDARE   visa endast träd med denna användares
              processer som rot

 
Visa ett träd av processer.

        killall -l, --list
       killall -V, --version

  -e,--exact          kräver exakt matchning för väldigt långa namn
  -I,--ignore-case    ingen skillnad på gemener/versaler vid namnmatchning
  -g,--process-group  döda processgrupp istället för process
  -y,--younger-than   döda processer yngre än TID
  -o,--older-than     döda processer äldre än TID
  -i,--interactive    fråga efter bekräftelse före dödandet
  -l,--list           lista alla kända signalnamn
  -q,--quiet          skriv inte ut klagomål
  -r,--regexp         tolka NAMN som ett utökat reguljärt uttryck
  -s,--signal SIGNAL  skicka signal istället för SIGTERM
  -u,--user ANVÄNDARE döda endast process(er) som körs som ANVÄNDARE
  -v,--verbose        rapportera om signalen blev skickad korrekt
  -V,--version        visa versionsinformation
  -w,--wait           vänta tills processerna är döda
  -n,--ns PID         matcha processer som tillhöl samma namnrymd
                      som PID
   -4,--ipv4             sök endast bland IPv4-uttag (socket)
  -6,--ipv6             sök endast bland IPv6-uttag (socket)
   -C, --color=TYP     färglägg process efter attribut
                      (ålder)
   -Z, --security-context
                      visa säkerhetsattribut
   -Z,--context REGEXP döda endast process(er) som har kontext
                      (måste föregå andra argument)
   -a, --arguments     visa kommandoradsargument
  -A, --ascii         använd ASCII-linjeritningstecken
  -c, --compact-not   komprimera inte identiska underträd
   -g, --show-pgids    visa processgrupps-ID:n; medför -c
  -G, --vt100         använd VT100-linjeritningstecken
   -h, --highlight-all markera aktuell process och dess förfäder
  -H PID, --highlight-pid=PID
                      markera denna process och dess förfäder
  -l, --long          korta inte ner långa rader

   -n, --numeric-sort  sortera utdata efter PID
  -N TYP, --ns-sort=TYP
                      sortera utdata efter namnrymd
                              (cgroup, ipc, mnt, net, pid, time, user, uts)
  -p, --show-pids     visa PID:ar; medför -c
   -s, --show-parents  visa överordnade processer för vald process
  -S, --ns-changes    visa namnrymdsövergångar
  -t, --thread-names  visa fullständiga trådnamn
  -T, --hide-threads  göm trådar, visa endast processer
   -u, --uid-changes   visa uid-övergångar
  -U, --unicode       använd UTF-8-linjeritningstecken (Unicode)
  -V, --version       visa versionsinformation
   udp/tcp-namn: [lokal_port][,[fjärrvärd][,[fjärrport]]]

 %*s ANVÄNDARE   PID ÅTKOMS KOMMANDO
 %s är tom (inte monterad?)
 %s: Ogiltig flagga %s
 %s: ingen process hittades
 %s: okänd signal; %s -l listar signaler.
 (okänd) /proc är inte monterad, kan inte ta status på /proc/self/stat.
 Felaktigt reguljärt uttryck: %s
 CPU-tider
  Denna process (användare system gäst blkio): %6.2f %6.2f %6.2f %6.2f
  Barnprocesser (användare system gäst):       %6.2f %6.2f %6.2f
 Kan inte ta reda på terminalens förmågor
 Kan inte allokera minne för matchande proc: %s
 Kan inte hitta uttagets enhetsnummer.
 Kan inte hitta användare %s
 Kan inte öppna katalogen /proc: %s
 Kan inte öppna /proc/net/unix: %s
 Kan inte öppna ett nätverksuttag.
 Kan inte öppna protokollfilen "%s": %s
 Kan inte slå upp lokal port %s: %s
 Kan inte ta status på %s: %s
 Kan inte ta status på fil %s: %s
 Copyright © 1993-2021 Werner Almesberger och Craig Small

 Copyright © 1993-2022 Werner Almesberger och Craig Small

 Copyright © 2007 Trent Waddington

 Copyright © 2009-2022 Craig Small

 Kunde inte döda process %d: %s
 Fel vid koppling till pid %i
 Ogiltig PID för namnrymd Ogiltigt namn för namnrymd Ogiltig flagga Ogiltigt tidsformat Döda %s(%s%d) ? (y/N)  Döda process %d ? (y/N)  Dödade %s(%s%d) med signal %d
 Minne
  V-storlek:  %-10s
  RSS:        %-10s 		 RSS-begränsning: %s
  Kodstart:   %#-10lx		 Kodslut:  %#-10lx
  Stackstart: %#-10lx
  Stackpekare (ESP): %#10lx	 Instr.-pekare (EIP): %#10lx
 Flagga för namnrymd kräver ett argument. Ingen processpecifikation angiven Inga processer hittades.
 Ingen sådan användare: %s
 PSmisc kommer med ABSOLUT INGEN GARANTI.
Detta är fri programvara och du är välkommen att distribuera den under
villkoren för GNU General Public License.
För mer information om dessa villkor, se filerna kallade COPYING.
Följande text är en informell översättning som enbart tillhandahålls
i informativt syfte. För alla juridiska tolkningar gäller den engelska originaltexten.
 Sidfel
  Denna Process (lägre övre): %8lu  %8lu
  Barnprocesser (lägre övre): %8lu  %8lu
 Tryck Retur för att stänga
 Process %d hittades inte.
 Någon process med pid %d finns inte.
 Process-, Grupp- och Sessions-ID
  Process-ID: %d		 Överordnat ID: %d
    Group-ID: %d		   Sessions-ID: %d
  T Group-ID: %d

 Process: %-14s		Tillstånd: %c (%s)
  Proc.:  %-3d		TTY: %s	Trådar: %ld
 Schemaläggning
  Policy: %s
  Nice:   %ld 		 RT-prioritet: %ld %s
 Signalera %s(%s%d) ? (y/N)  Angivna filnamnet %s finns inte.
 Angivet filnamn %s är inte en monteringspunkt.
 TERM är inte inställd
 Kan inte allokera minne för proc_info

 Kan inte öppna stat-fil för pid %d (%s)
 Kan inte genomsöka stat-fil Okänd AF %d för lokal port
 Användning: fuser [-fIMuvw] [-a|-s] [-4|-6] [-c|-m|-n RYMD]
             [-k [-i] [-SIGNAL]] NAMN…
       fuser -l
       fuser -V
Visa vilka processer som använder namngivna filer, uttag eller filsystem.

  -a,--all              visa även filer som inte används
  -i,--interactive      fråga innan processen dödas (ignoreras utan -k)
  -I,--inode            använd alltid inoder för att jämföra filer
  -k,--kill             döda processer som använder namngiven fil
  -l,--list-signals     lista tillgängliga signalnamn
  -m,--mount            visa alla processer som använder namngivna filsystem eller blockenheter
  -M,--ismountpoint     genomför begäran endast om NAMN är en monteringspunkt
  -n,--namespace RYMD   sök i denna namnrymd (fil, udp, tcp)
  -s,--silent           tyst körning
  -SIGNAL               skicka denna signal istället för SIGKILL
  -u,--user             visa användar-ID
  -v,--verbose          informativ utskrift
  -w,--writeonly        döda bara processer med skrivrättighet
  -V,--version          visa versionsinformation
 Användning: killall [FLAGGA]… [--] NAMN…
 Användning: peekfd [-8] [-n] [-c] [-d] [-V] [-h] <pid> [<fd> ..]
    -8, --eight-bit-clean         skriv ut 8-bitars rena strömmar.
    -n, --no-headers              visa inte läs/skriv från fd-huvuden.
    -c, --follow                  titta även på alla nya barnprocesser.
    -t, --tgid                    titta på alla trådar där tgid är lika med <pid>.
    -d, --duplicates-removed      Ta bort dubbletter av läs/skriv från utdata.
    -V, --version                 visar versionsinformation.
    -h, --help                    visar den här hjälpen.

  Tryck CTRL-C för att avsluta utdata.
 Användning: prtstat [flaggor] PID …
       prtstat -V
Skriv ut information om en process
    -r,--raw       Rå visning av information
    -V,--version   Visa versionsinformation och avsluta
 Användning: pstree [-acglpsStTuZ] [ -h | -H PID ] [ -n | -N typ ]
              [ -A | -G | -U ] [ PID | ANVÄNDARE ]
   eller: pstree -V

 Du kan endast använda filer med monteringspunktsflaggor Du kan inte söka efter endast IPv4- och endast IPv6-uttag samtidigt Du måste tillhandahålla minst en PID. flagga för alla, -m,  kan inte användas med flaggan för tyst, -s. asprintf i print_stat misslyckades.
 disk sover fuser (PSmisc) %s
 killall: %s saknar processposter (inte monterad?)
 killall: Felaktigt reguljärt uttryck: %s
 killall: Kan inte hämta UID från processtatus
 killall: Maximalt antal namn är %d
 killall: hoppar över partiell matchning %s(%d)
 sidväxling peekfd (PSmisc) %s
 procfs-fil för %s-namnrymd inte tillgänglig
 prtstat (PSmisc) %s
 pstree (PSmisc) %s
 kör sover spårad okänd zombie 