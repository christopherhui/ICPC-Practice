import math

n = int(input())
count = 0
for i in range(n):
    aList = [float(x) for x in input().split()]
    if aList[0] < aList[2] and math.ceil(aList[0]) == math.floor(aList[2]):
        count += 1
    elif aList[2] > aList[1] and math.ceil(aList[2]) == math.floor(aList[0]):
        count += 1
print((2 / (count / 2)))