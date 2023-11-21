#!/bin/bash
qmk compile -kb dztech/pluto -km oddish && mkdir -p output && mv dztech_pluto_oddish.uf2 output/
