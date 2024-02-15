#!/bin/bash
qmk compile -kb mode/m75s -km cubone && mkdir -p output && mv mode_m75s_cubone.bin output/
#qmk compile -kb dztech/og60 -km oddish && mkdir -p output && mv dztech_og60_oddish.uf2 output/
