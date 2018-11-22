for a in `ls`
do
if [ -d $a ]
then
continue
else
mkdir selected
fi
done

for aa in `ls`
do
if [ -d "unselected" ]
then
continue
else
mkdir unselected
fi
done

n=3
for (( i=1; $i <= $n; i = $i+1 ))
do
echo "enter 1 to create,2 to count:"
read val

case $val in
1)
echo "enter file name"
read v
if [ -e "$v" ]
then 
continue
else
touch $v
fi
;;
2)
c=0
d=0
e=0
for v in `ls`
do
l=${#v}
s1=${v:(l-4)}
s2=${v:(l-5)}
s3=${v:(l-3)}
if [ $s1 = ".txt" ]
then
c=$[$c+1]
elif [ $s2 = ".docx" ]
then
d=$[$d+1]
elif [ $s3 = ".sh" ]
then
e=$[$e+1]
fi
done
echo "txt file:$c"
echo "docx file:$d"
echo "sh file:$e"
;;
esac
done

