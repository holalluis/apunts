var sum: int
var i: int

sum = 0
i = 0

while i < 100000000:
  inc(i, 1)
  inc(sum, i)

echo "Nim: ",sum
