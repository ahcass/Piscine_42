1) Renommer a.htm en a
mv a.htm a

2) patch a(l'encien) sw.diff -o(garder l'encien version) b(nouveau)
patch a sw.diff -o b

3) Supprimer le fichier a
rm a

4) Supprimer le fichier sw.diff
rm sw.diff
