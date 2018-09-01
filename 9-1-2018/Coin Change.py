import math

aList = [int(x) for x in input().split()]
n, s = aList[0], aList[1]
if n != 0:
    coins = [int(x) for x in input().split()]
    for i in range(1, len(coins)):
        coins[i] = coins[i - 1] * coins[i]
    coins = [1] + coins
else:
    coins = [1]

dp = [1] * (coins[0] + 1) + [math.inf] * (s - coins[0])
dp[0] = 0

for j in range(s + 1):
    for change in [x for x in coins if j >= x]:
        if dp[j - change] + 1 <= dp[j]:
            dp[j] = dp[j - change] + 1

print(dp[s])