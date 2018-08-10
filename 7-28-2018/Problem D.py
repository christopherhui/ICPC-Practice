aList = [int(x) for x in input().split()]
floor = aList[0]
start = aList[1]
goal = aList[2]
up = aList[3]
down = (aList[4])
x = 0
y = 0

aTable = [None] * (floor + 1)

if up != 0:
    for a in range(start, floor, up):
        aTable[a] = x
        x += 1

if down != 0:
    for b in range(start, -1, -down):
        aTable[b] = y
        y += 1

for i in range(0, floor):
    if aTable[i] != None:
        if i + up > floor and i - down < floor:
            continue
        elif i + up > floor:
            if aTable[i - down] == None:
                aTable[i - down] = aTable[i] + 1
        elif i - down < 0:
            if aTable[i + up] == None:
                aTable[i + up] = aTable[i] + 1
        elif aTable[i + up] == None:
            aTable[i + up] = aTable[i] + 1
        elif aTable[i - down] == None:
            aTable[i - down] = aTable[i] + 1

if aTable[goal] == None:
    print('use the stairs')
else:
    print(aTable[goal])

