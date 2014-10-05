1) Les valeurs dans les variables sont en base 5, et la somme renvoyé est en base 13
1.1) Les caracteres sont dans le bon ordre et correspondent aux nombres du plus petit au plus grand commencant par 0


2) Les Variables
FT_NBR1=\\\'\?\"\\\"\'\\
FT_NBR2=rcrdmddd

et

FT_NBR1=\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"
FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo


3) Au moins 6 façons de faire
echo $(var2=$(echo $FT_NBR2 | tr "mrdoc" "01234"); var1=$(echo $FT_NBR1 | tr "\'\\\?\"\!" "01324"); let "total=$var2+$var1"; echo "obase=13;" $(echo "obase=10; ibase=5; $total" | bc) | bc;) | tr "0123456789ABC" "gtaio luSnemf"

echo $FT_NBR1 + $FT_NBR2 | sed 's/\\/1/g' | sed 's/?/3/g' | sed 's/!/4/g' | sed "s/'/0/g" | sed "s/\"/2/g" | tr "mrdoc" "01234" | xargs echo "ibase=5; obase=23;" | bc | tr "0123456789ABC" "gtaio luSnemf"

echo $FT_NBR1 + $FT_NBR2 | sed 's/\\/1/g' | sed 's/?/3/g' | sed 's/!/4/g' | sed "s/'/0/g" | sed "s/\"/2/g" | tr "mrdoc" "01234" | xargs echo "obase=10; ibase=5;" | bc | xargs echo "obase=13;" | bc | tr "0123456789ABC" "gtaio luSnemf"

echo $FT_NBR1 + $FT_NBR2 | tr "\'\\\?\"\!" "01324" | tr "mrdoc" "01234" | xargs echo "ibase=5; obase=23;" | bc | tr "0123456789ABC" "gtaio luSnemf"

echo $FT_NBR1 + $FT_NBR2 | tr "\'\\\?\"\!" "01324" | tr "mrdoc" "01234" | xargs echo "obase=10; ibase=5;" | bc | xargs echo "obase=13;" | bc | tr "0123456789ABC" "gtaio luSnemf"

echo $(var1="${FT_NBR2//m/0}"; var2="${var1//r/1}"; var3="${var2//d/2}"; var4="${var3//o/3}"; var5="${var4//c/4}"; vir1="${FT_NBR1//\'/0}"; vir2="${vir1//\\/1}"; vir3="${vir2//\"/2}"; vir4="${vir3//\?/3}"; vir5="${vir4//\!/4}"; let "total=$vir5+$var5"; echo "obase=13;" $(echo "obase=10; ibase=5; $total" | bc) | bc;) | tr "0123456789ABC" "gtaio luSnemf"


4) Pour tester, il faut creer  un fichier qui va contenir les variables et l'une des commandes
4.1) Pour executer le fichier on peut faire "bash le_nom_du_fichier" ou "./le_nom_du_fichier"
4.2) Si ce dernier ne marche pas, on fait "chmod u+x le_nom_du_fichier" et ensuite "./le_nom_du_fichier"
