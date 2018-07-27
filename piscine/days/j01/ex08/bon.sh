#!/bin/sh

ldapsearch -Q -LLL "sn=*bon*" | \
grep "sn" | \
wc -l|cut -c 8-