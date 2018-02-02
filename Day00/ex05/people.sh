#!/bin/sh
ldapsearch -LLL -Q "(uid=z*)" cn | grep "cn: " | sort -rf | cut -c 5-
