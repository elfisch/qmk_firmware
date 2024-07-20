#!/bin/bash
qmk compile -kb dztech/dz60rgb_ansi/v2_1 -km cubone && mkdir -p output && mv dztech_dz60rgb_ansi_v2_1_cubone.bin output/dztech_dz60rgb_ansi_cubone.bin
qmk compile -kb dztech/dz60rgb_ansi/v2_1 -km oddish && mkdir -p output && mv dztech_dz60rgb_ansi_v2_1_oddish.bin output/dztech_dz60rgb_ansi_oddish.bin
printf "\n\n********************************************************************************\nNOTE: after putting board into bootloader, it will come up as usb device\ndelete FLASH.BIN\ncopy new .bin to the device\neject device through windows\n********************************************************************************\n"
