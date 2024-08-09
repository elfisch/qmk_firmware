#!/bin/bash
qmk compile -kb kprepublic/bm60hsrgb_poker/rev2 -km cubone && mkdir -p output && mv kprepublic_bm60hsrgb_poker_rev2_cubone.hex output/poker_bm60_cubone.hex
