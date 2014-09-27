1) Creation des fichiers et dossiers de test0 a test5
mkdir test0
touch test1
mkdir test2
touch test3
touch test4
touch test5

2) Changer les droits des fichiers et dossiers
chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3
chmod 641 test4
chmod 404 test5

3) Creation du lien Symbolique (Comme le raccourcis sous Windows)
ln -s test0 test6

4) Compresser les fichiers
tar -cf exo2.tar test0 test1 test2 test3 test4 test5 test6
ou
tar -cf exo2.tar *

5) Suppression des fichiers et dossiers
rm -r test0 test1 test2 test3 test4 test5 test6
