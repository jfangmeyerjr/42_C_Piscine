#!/bin/sh
ldapsearch -x "(sn=*bon*)" sn | grep "sn: " | wc -l | awk '{ sub(/^[ \t]+/, ""); print }'
