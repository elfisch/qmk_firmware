#!/bin/bash
qmk compile -kb gray_studio/bd60 -km cubone && mkdir -p output && mv gray_studio_bd60_cubone.bin output/
qmk compile -kb gray_studio/bd60 -km oddish && mkdir -p output && mv gray_studio_bd60_oddish.bin output/
