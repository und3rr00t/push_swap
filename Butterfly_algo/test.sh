ITERATIONS=50
INT_MIN=-2147483648
INT_MAX=2147483647

run_test() {
    local COUNT=$1
    local TEST_NAME=$2
    
    echo "=================================================="
    echo "  RUNNING $TEST_NAME TEST ($ITERATIONS iterations)"
    echo "=================================================="

    > results.txt
    > checks.txt

    for i in $(seq 1 $ITERATIONS); do
        echo -ne "Progress: $i / $ITERATIONS\r"
        ARG=$(python3 -c "import random; print(' '.join(map(str, random.sample(range($INT_MIN, $INT_MAX), $COUNT))))")
        ./push_swap $ARG | wc -l >> results.txt
        ./push_swap $ARG | ./checker_linux $ARG >> checks.txt
    done

    echo -e "\n--- $TEST_NAME STATISTICS ---"

    AVG=$(awk '{ total += $1 } END { printf "%.0f", total/NR }' results.txt)
    echo "Average Moves: $AVG"

    MAX=$(sort -nr results.txt | head -1)
    echo "Max Moves:     $MAX"

    MIN=$(sort -n results.txt | head -1)
    echo "Min Moves:     $MIN"

    ERRORS=$(grep -v "OK" checks.txt | wc -l)
    if [ "$ERRORS" -eq 0 ]; then
        echo "Validity:      PASS (All OK)"
    else
        echo "Validity:      FAIL ($ERRORS errors found!)"
    fi
    echo ""
    rm results.txt checks.txt
}

run_test 100 "STACK 100"

run_test 500 "STACK 500"