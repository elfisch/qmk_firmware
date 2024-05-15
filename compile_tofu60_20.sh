#!/bin/bash
qmk compile -kb dztech/tofu60 -km cubone && mkdir -p output && mv dztech_tofu60_cubone.uf2 output/
qmk compile -kb dztech/tofu60 -km oddish && mkdir -p output && mv dztech_tofu60_oddish.uf2 output/
