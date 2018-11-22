vari=2k15
var="cse $vari"
echo $var
echo "Enter Value : "
read val
echo $val
val_1=10
val_2=20
add=[$val_1 -a $val_2]
echo "Added value of 10 and 20 : $adoi"
echo "Would you want to know which lab is this(y/n) ?"
read reply
if [ "$reply" = "y" ]
then
	echo "This is CSE3202 OS LAB"
elif [ "$reply" = "n" ]
then
	echo "Your reply was no!"
else
	echo "Wrong Input"
fi
echo "Have a nice day :) "


