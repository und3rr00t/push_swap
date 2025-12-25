for i in {1..100}; do 
    ARG=$(shuf -i 1-500 | tr '\n' ' '); 
    ./push_swap $ARG | wc -l >> results.txt; 
    ./push_swap $ARG | ./checker_linux $ARG >> checks.txt;
done

echo "--- RESULTS ---"
echo "Average Moves:"
awk '{ total += $1 } END { print total/NR }' results.txt
echo "Max Moves:"
sort -nr results.txt | head -1
echo "Min Moves:"
sort -n results.txt | head -1
echo "Errors (Should be 0):"
grep -v "OK" checks.txt | wc -l

rm results.txt checks.txt
