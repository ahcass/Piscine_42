ldapsearch "objectClass=apple-user" | grep -i "uid:"| cut -c 6-| sort -b -r -f
