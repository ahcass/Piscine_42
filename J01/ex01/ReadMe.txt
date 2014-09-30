1) J'ai trouvé 2 façon de faire

groups $FT_USER | tr " " "," | tr -d "\n"

ou

groups $FT_USER | sed 's/ /,/g' | tr -d '\n'
