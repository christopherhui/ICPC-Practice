aList = [int(x) for x in input().split()]
n = aList[0]
m = aList[1]
enemyList = [0] + [int(x) for x in input().split()]
highestSF = [0] * (n + 1)

for i in range(m + 1, n + 1):

    if enemyList[i] + highestSF[i - m] > highestSF[i - m] and enemyList[i] + highestSF[i - m] > highestSF[i - 1]:
        highestSF[i] = enemyList[i] + highestSF[i - m]
    else:
        highestSF[i] = highestSF[i - 1]

print(highestSF[len(highestSF) - 1])