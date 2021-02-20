cat /etc/passwd | grep -v "#" | awk " NR!=1 && NR!=2" | sed -e "s/:*:.*/$FT_LINE1/g"
