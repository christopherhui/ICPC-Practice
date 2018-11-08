n = int(input())
aList = [int(x) for x in input().split()]
bList= [int(x) for x in input().split()]
aSum = [0,0,0]
totSum = [0,0,0]

for i in range(0, n):
    aSum[i % 3] += aList[i]

for j in range(0, n):
    totSum[0] += aSum[0] * bList[j]
    totSum[1] += aSum[1] * bList[j]
    totSum[2] += aSum[2] * bList[j]
    totSum.append(totSum.pop(0))

print(' '.join([str(x) for x in totSum]))