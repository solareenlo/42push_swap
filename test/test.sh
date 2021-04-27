#!/bin/bash
N=70
M=100
SUM=0
MAX=0
MIN=99999

for i in `seq 1 $N`
do
	ARG=`ruby -e "puts (1..$M).to_a.shuffle.join(' ')"`
	if ../push_swap $ARG | ../checker $ARG | grep -q KO
	then
		echo "KO"
		echo ARG
		break
	fi
	NUM="$(../push_swap $ARG | wc -l | sed 's/ //g')"
	if [ "$NUM" -gt "$MAX" ]
	then
		MAX=$NUM;
	fi
	if [ "$MIN" -gt "$NUM" ]
	then
		MIN=$NUM;
	fi
	SUM=$(($SUM+$NUM))
	# echo "$i\n $ARG"
	../push_swap $ARG | ../checker $ARG
	echo $NUM
done

echo "MAX:"$MAX
echo "AVG:"$(($SUM / $N))
echo "MIN:"$MIN
