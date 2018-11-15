firstLine = input()
secondLine = input()

firstLine = [int(x) for x in firstLine.split()]
secondLine = [int(x) for x in secondLine.split()]

aTable = [0] * firstLine[0]
waitAccum = 1

for i in range(firstLine[0]):

    longestTime = firstLine[1]

    if i == firstLine[0] - 1:
        aTable[i] = firstLine[1] + aTable[i - 1]

    elif (secondLine[i + 1] - secondLine[i]) * waitAccum * firstLine[2] < longestTime:
        aTable[i] = (secondLine[i + 1] - secondLine[i]) * waitAccum * firstLine[2] + aTable[i - 1]
        waitAccum = waitAccum + 1

    else:
        aTable[i] = firstLine[1] + aTable[i - 1]
        waitAccum = 1

print(aTable[firstLine[0] - 1])
print(aTable)