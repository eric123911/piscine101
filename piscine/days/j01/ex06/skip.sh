#!/bin/sh

ls -l | \
awk 'NR == 0 || NR % 2 == 0'