n = int(input())
aList = input().split()
m = int(input())

aDict = {}
correctDict = {}
incorrectDict = {}
allDict = {}
bDict = {}

overLap = False
yes = True

for i in range(m):
    bList = input().split()
    if bList[2] == 'correct':
        if bList[0] not in correctDict:
            correctDict[bList[0]] = 1
        else:
            correctDict[bList[0]] += 1
        if bList[0] not in incorrectDict:
            incorrectDict[bList[0]] = 1
        else:
            incorrectDict[bList[0]] += 1
    if bList[0] not in allDict:
        allDict[bList[0]] = 1
    else:
        allDict[bList[0]] += 1
    aDict[bList[0]] = bList[1]

for i in aList:
    if i in bDict:
        bDict[i] += 1
    else:
        bDict[i] = 1
    if allDict[i] > 2:
        overLap = True

if not overLap:
    for i in range(0, len(aList)):
        for j in aDict:
            if aList[i] == j and i != len(aList) - 1:
                print(aDict[j], end=' ')
            elif aList[i] == j and i == len(aList) - 1:
                print(aDict[j])
            if j in incorrectDict:
                yes = False
    if yes:
        print('correct')
    else:
        print('incorrect')
else:
    numCorrect = 0

    for i in bDict:
        if bDict[i] != 1:
            numCorrect += correctDict[i] ** bDict[i]
    print(str(numCorrect), "correct")
    numIncorrect = -numCorrect

    for i in bDict:
        if bDict[i] != 1:
            numIncorrect += allDict[i] ** bDict[i]
    print(str(numIncorrect), "incorrect")