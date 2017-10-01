#!/usr/bin/env bash

src="${1}"
src_len=${#src}
tgt_len=$(( src_len - 4 ))
tgt=_build/"$(basename ${src:0:tgt_len})"
g++ -Wall "${src}" -o "${tgt}"
