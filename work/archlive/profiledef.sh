#!/usr/bin/env bash
# shellcheck disable=SC2034

iso_name="installer"
iso_label="Installer"
iso_publisher="Arch Linux <https://archlinux.org>"
iso_application="Arch Linux baseline"
iso_version="$(date +%Y%m%d%H%M)"
install_dir="arch"
buildmodes=('iso')
bootmodes=('uefi-x64.systemd-boot.esp' 'uefi-x64.systemd-boot.eltorito')
arch="x86_64"
pacman_conf="pacman.conf"
airootfs_image_type="erofs"
airootfs_image_tool_options=('-zlz4hc' -E ztailpacking)
#airootfs_image_tool_options=('-comp' 'xz' '-Xbcj' 'x86' '-b' '1M' '-Xdict-size' '1M')
file_permissions=(
  ["/etc/shadow"]="0:0:400"
  ["/usr/share/autorun/autorun.sh"]="0:0:755"
  ["/etc/autorun/99_autoinstall.sh"]="0:0:755"
)
