#!/bin/bash
qmk compile -kb dztech/og60 -km cubone && mkdir -p output && mv dztech_og60_cubone.uf2 output/
qmk compile -kb dztech/og60 -km oddish && mkdir -p output && mv dztech_og60_oddish.uf2 output/
