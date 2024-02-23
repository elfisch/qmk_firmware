#!/bin/bash
qmk compile -kb mode/m75s -km cubone && mkdir -p output && mv mode_m75s_cubone.bin output/
qmk compile -kb mode/m75s -km oddish && mkdir -p output && mv mode_m75s_oddish.bin output/
