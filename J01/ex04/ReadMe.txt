1) J'ai trouvé 2 façon de faire

ifconfig | grep "ether" | cut -c7-

ou

ifconfig | grep "ether" | sed 's/\(.*\)ether //g'
