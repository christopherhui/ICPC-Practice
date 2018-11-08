n = int(input())
aList = [int(x) for x in input().split()]
count = [0] * (max(aList) + 1)
for a in aList:
    count[a] += a

highestSF = [0] * (max(aList) + 1)
highestSF[1] = count[1]

for i in range(2, len(count)):
    highest = highestSF[i - 1]

    if count[i] + highestSF[i - 2] > highest:
        highest = count[i] + highestSF[i - 2]

    highestSF[i] = highest

print(highestSF[len(count) - 1])