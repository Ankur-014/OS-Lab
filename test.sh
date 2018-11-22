if [ -e " Selected " ]
then mkdir Selected
fi
if [ -e " Unselected " ]
then mkdir Unselected 
fi

var=1
while [ 1 ]
do
echo "Enter 1 for create a file Enter any key for move"
read user
case $user in
1 )read file
touch $file
;;


* )read directory
mainlen=${#directory}
for var in `ls`
do
len=${#var}
j=0
while [ $j -le $[ $len - $mainlen ] ]
do 
str=${str:$j:$mainlen}
j=$[ $j + 1 ]
if [ $str=" $directory " ]
then
echo " $str "
#mv $var "/home/dell/Desktop/2K15/Selected"
fi
done
done
;;
esac
done

