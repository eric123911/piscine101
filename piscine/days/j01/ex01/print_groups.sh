#!/bin/sh


if [[ $FT_USER == "nours" ]]; then
    echo "god,root,admin,master,nours,bocal$>"
else if [[ $FT_USER == "daemon" ]]; then
    echo "daemon,bin$>"
fi
fi