#!/bin/sh

prefix=/usr
exec_prefix=/usr
libdir=${exec_prefix}/lib

LD_PRELOAD=${libdir}/libjemalloc.so.2
export LD_PRELOAD
exec "$@"
