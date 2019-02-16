import copy

t = int(input())
for i in range(t):
    aList = [int(x) for x in input().split()]
    numList = [int(x) for x in list(str(aList[0]))]
    maxList = copy.deepcopy(numList)
    minList = copy.deepcopy(numList)
    maxNum = -1
    maxIndex = -1
    minIndex = -1
    maxCnt = aList[1]
    minCnt = aList[1]
    minNum = 10
    for j in range(0, len(maxList)):
        if maxCnt == 0:
            break
        for k in range(j, len(maxList)):
            if maxList[k] > maxNum:
                maxNum = maxList[k]
                maxIndex = k
        if maxIndex != j:
            temp = maxList[j]
            maxList[j] = maxNum
            maxList[maxIndex] = temp
            maxCnt -= 1
        maxNum = -1

    for j in range(0, len(minList)):
        if minCnt == 0:
            break
        for k in range(len(minList) - 1, -1 + j, -1):
            if minList[k] < minNum:
                minNum = minList[k]
                minIndex = k
        if minIndex != j:
            temp = minList[j]
            minList[j] = minNum
            minList[minIndex] = temp
            minCnt -= 1
        minNum = 10

    print(''.join([str(x) for x in minList]), ''.join([str(x) for x in maxList]))