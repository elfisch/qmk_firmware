#!/bin/bash
qmk compile -kb keychron/q3/ansi -km cubone && mkdir -p output && mv keychron_q3_ansi_cubone.bin output
qmk compile -kb keychron/q3/ansi -km oddish && mkdir -p output && mv keychron_q3_ansi_oddish.bin output
