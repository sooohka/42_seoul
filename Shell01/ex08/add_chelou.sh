echo $FT_NBR1 + $FT_NBR2 | sed -e "s/\'/0/g" -e 's/\\/1/g' -e 's/\"/2/g' -e 's/\?/3/g' -e 's/\!/4/g' | tr "mrdoc" "01234" | xargs echo "obase=13; ibase=5;" | bc | tr "0123456789ABC" "gtaio luSnemf"
