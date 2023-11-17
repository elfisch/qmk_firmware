#!/bin/bash
qmk compile -kb cannonkeys/db60/hotswap -km cubone && mkdir -p output && mv cannonkeys_db60_hotswap_cubone.bin output/
qmk compile -kb cannonkeys/db60/hotswap -km oddish && mkdir -p output && mv cannonkeys_db60_hotswap_oddish.bin output/
printf "\n\n********************************************************************************\nNOTE: to properly update keymap on fresh PCB, you may have to compile and flash with VIA disabled and then use the EE_CLR key. Then compiling with VIA enabled and flash. After that you can leave VIA enabled (I think), but use EE_CLR after each flash (unless you change the EE_CLR key, then start over with VIA disabled).\n********************************************************************************\n"
