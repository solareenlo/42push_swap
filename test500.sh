N=500
M=500

for i in `seq 1 $N`
do
	NUM=`ruby -e "puts (1..$M).to_a.shuffle.join(' ')"`
	# echo "$i\n $NUM"
	./push_swap $NUM | ./checker $NUM
done
