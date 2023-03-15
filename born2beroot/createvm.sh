#init
VBoxManage createvm --name Debian --basefolder /System/Volumes/Data/sgoinfre/students/mamagalh/ --default --ostype Debian_64 --register
VBoxManage modifyvm Debian --memory 4096 --acpi on --boot1 dvd
VBoxManage createhd --filename debian.vdi --size 8000 --format VDI

/sgoingfree/students/mamagalh/vm/Debian/Debian.vdi

#HDD
VBoxManage storagectl CentOS --name "IDE Controller" --add ide --controller PIIX4
VBoxManage storageattach Debian –-storagectl “IDE Controller” –-port 0 –-device 0 –-type hdd –-medium “debian.vdi”
vbobmanage list hdds
vboxmanage closemedium disk 2658a02d-67c3-4466-a1a6-86fa578b133d --delete

#image
VBoxManage storageattach CentOS –-storagectl “IDE Controller” –-port 0 –-device 1 –-type dvd –-medium /home/rafael/Desktop/CentOS-5.4-i386-bin-1of6.iso