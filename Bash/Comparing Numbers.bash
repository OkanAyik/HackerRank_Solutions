read var1
read var2

if [ $var1 -gt $var2 ] 
then
    echo "X is greater than Y"
elif [ $var1 -lt $var2 ] 
then
    echo "X is less than Y"
else
    echo "X is equal to Y"
fi