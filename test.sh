
export MBREAKER_PRINT_COUNT=1 

func=malloc

nmalloc=$(./so_long maps/map.ber | grep -oP "(?<=$func was called )\d+")

tests=()
mkdir .mbreaker/
for i in $(seq 1 $nmalloc);
do
	tests+=("echo \"Test $i\" && MBREAKER_FUNC=$func MBREAKER_FAIL_AT=$i valgrind --leak-check=full --show-leak-kinds=all ./so_long maps/map.ber &> .mbreaker/test_$i.txt")
done

printf "%s\n" "${tests[@]}" | xargs -I {} -P $(nproc) bash -c "{}"

for i in $(seq 1 $nmalloc);
do
	if [[ "$(cat .mbreaker/test_$i.txt | grep "ERROR SUMMARY: 0 errors")" == "" || $(cat .mbreaker/test_$i.txt | grep "at address") ]]; then
		echo "$i FAILED";
	fi
done

