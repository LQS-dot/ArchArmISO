#!/bin/bash
#

### clear old os.qcow2 and move new os.qcow2 to archisoarm_releng/aarch64/airootfs/var/lib/images/


function make_archarmiso(){
    iso_path=lqs_releng/iso/arch/boot/aarch64/
    airootfs=/var/work/lqs_releng/aarch64/airootfs/boot/

    rm -rf lqs_releng; yes | cp -rf archisoarm_releng lqs_releng
    mkdir -p lqs_releng/iso/arch/boot/aarch64/

    cp -rf Image initramfs-linux.img ${iso_path} 
    cp -rf initramfs-linux.img ${airootfs} 
    cp -rf BOOTAA64.EFI lqs_releng/aarch64/airootfs/usr/lib/systemd/boot/efi/systemd-bootaa64.efi
}

make_archarmiso

### go
mkarchiso -v -w /var/work/lqs_releng/ -o /var/work/ /var/work/work/releng/
