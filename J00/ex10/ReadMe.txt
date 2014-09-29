1) J'ai trouvé 2 façon de faire 

find . -type f \( -name "*~" -o -name "#*#" \) -delete -exec echo "{}" \;

ou

find . \( -name '*~' -o -name '#*#' \) -print -delete
