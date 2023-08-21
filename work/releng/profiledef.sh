#!/usr/bin/env bash
# shellcheck disable=SC2034

iso_name="installer"
iso_label="Installer"
iso_publisher="Jack Myers"
iso_application="Generic ARM64 Arch Linux Live/Rescue CD"
iso_version="$(date +%Y%m%d%H%M)"
install_dir="arch"
buildmodes=('iso')
bootmodes=('uefi-aarch64.systemd-boot.esp' 'uefi-aarch64.systemd-boot.eltorito')
arch="aarch64"
pacman_conf="pacman.conf"
airootfs_image_type="squashfs"
airootfs_image_tool_options=('-comp' 'xz' '-Xbcj' 'arm' '-b' '1M' '-Xdict-size' '1M')
#airootfs_image_tool_options=('-zlz4hc' -E ztailpacking)
file_permissions=(
  ["/etc/shadow"]="0:0:400"
  ["/usr/share/autorun/autorun.sh"]="0:0:755"
  ["/etc/autorun/99_autoinstall.sh"]="0:0:755"
)
