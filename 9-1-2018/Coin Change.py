import math

aList = [int(x) for x in input().split()]
n, s = aList[0], aList[1]
coins = [int(x) for x in input().split()]
for i in range(1, n):
    coins[i] = coins[i - 1] * coins[i]
coins = [1] + coins
print(coins)

dp = [0] * s
for a in range(s):
    dp[a] = a
dp = dp + [s]

for j in range(s + 1):
    for change in [x for x in coins if j >= x]:
        if dp[j - change] + 1 <= dp[j]:
            dp[j] = dp[j - change] + 1

print(dp[s])