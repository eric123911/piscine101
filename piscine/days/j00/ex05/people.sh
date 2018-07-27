#!/bin/sh

ldapsearch -Q -L "cn=z*" cn | grep '^cn:' | sort -r