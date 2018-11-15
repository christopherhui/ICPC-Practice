aList = [int(x) for x in input().split()]
n, s = aList[0], aList[1]
coins = [1] + [int(x) for x in input().split()]
count = 0
for i in range(n):
  count += s % coins[i+1]
  s = s // coins[i+1]
print(count + s)
