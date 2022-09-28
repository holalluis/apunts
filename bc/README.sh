# bc - An arbitrary precision calculator language
# man bc

# exemples
echo 1+1 | bc
# 2

bc <<< 2+2
# 4

echo 100/3 | bc
# 33

echo 100/3 | bc -l
# 33.33333333333333333333

bc -l <<< 25^2
# 625

echo "scale=10; 5.1234 * 5.5678" | bc
# 28.52606652

echo "scale=5; 5.1234 * 5.5678" | bc
# 28.52606
