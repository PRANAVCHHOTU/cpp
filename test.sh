#! /bin/bash

#echo $0 $1 $2 $3 '> echo $1 $2 $3' 
#echo -e "enter thr file name :\c"
#read file_name

#if  [ -s $file_name ]
#then
#echo "$file_name found."
#else 
#echo "$file_name not found."
#fi

#NAME[0]="PRANAV"
#NAME[1]="ranjan"
#echo "method ${NAME[@]}"
#echo "mwthod2 ${NAME[*]}"


num1=20
num2=15 

echo $(( num1 + num2 ))

echo $(( num1 / num2 ))
echo $(( num1 % num2 ))
