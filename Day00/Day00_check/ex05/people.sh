ldapsearch -LLL "(uid=z*)" cn | grep "cn: " | sort -rf | cut -c 5-
