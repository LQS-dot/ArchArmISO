#!/bin/sh
first_disk=$(ls -ld /sys/class/block/*/device | grep -oP '\/sys\/class\/block\/\K(\w+)(?!\/device\?)' | grep -vP '(sr|scd|hdc)'  | head -1)
if [ -n "${first_disk}" ];then
    echo $first_disk > /tmp/lqs_disk
    #nohup qemu-img convert -p -O raw /var/lib/images/os.qcow2 "/dev/${first_disk}" > /tmp/qemu-progress.tmp &
    #while :
    #do
    #    ls /proc/$! 2>&1 >/dev/null || break
    #    tail -1 /tmp/qemu-progress.tmp | tr '\r' '\n'
    #    sleep 1
    #done
fi

#reboot
