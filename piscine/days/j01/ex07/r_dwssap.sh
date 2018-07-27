#!/bin/sh

cat /etc/passwd | \
tail -n +11 | \
awk 'NR == 2 || NR % 2 == 0' | \
cut -d : -f 1 | \
rev | \
sort -r | \
awk "NR == $FT_LINE1, NR == $FT_LINE2" | \
tr "\n" "," | \
sed 's/,/, /g' | \
cat -e | \
sed 's/,.\$/\./'