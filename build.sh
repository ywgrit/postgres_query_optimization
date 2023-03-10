#!/bin/sh
./configure --prefix=/home/wx/postgres-10.0 --enable-debug
make -j$(nproc)
