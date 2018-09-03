aList = [int(x) for x in input().split()]
k, n = aList[0], aList[1]
bList = [int(x) for x in input().split()]
aMap = {}
cList = []
for x in range(1, k+1):
    aMap[x] = 0
for i in bList:
    aMap[i] += 1
    if i in cList:
        cList.pop(cList.index(i))
    else:
        cList.append(i)

if len(cList) == 2:
    if aMap[cList[0]] > aMap[cList[1]]:
        print('-', cList[0], '+', cList[1])
    elif aMap[cList[0]] < aMap[cList[1]]:
        print('-'+ str(cList[1]), '+'+ str(cList[0]))
    else:
        count = 0
        found = -1
        reprint = True
        for y in range(1, k+1):
            if aMap[y] == 0 and count == 0:
                count += 1
                found = y
            elif aMap[y] == 0 and count >= 1:
                print('*')
                reprint = False
                break
        if found == sum(range(k+1))- sum(bList):
            print('+'+ str(found))
        else:
            print('*')
elif len(cList) == 1:
    if len(aMap) == 1:
        print('-'+ str(cList[0]))
    elif aMap[cList[0]] == min(aMap):
        print('+'+ str(cList[0]))
    elif aMap[cList[0]] == max(aMap):
        print('-'+ str(cList[0]))
    else:
        count = 0
        found = -1
        reprint = True
        for y in range(1, k+1):
            if aMap[y] == 0 and count == 0:
                count += 1
                found = y
            elif aMap[y] == 0 and count >= 1:
                print('*')
                reprint = False
                break
        if found == sum(range(k+1))- sum(bList):
            print('+'+ str(found))
        else:
            print('*')
else:
    count = 0
    found = -1
    reprint = True
    for y in range(1, k+1):
        if aMap[y] == 0 and count == 0:
            count += 1
            found = y
        elif aMap[y] == 0 and count >= 1:
            print('*')
            reprint = False
            break
    if found == sum(range(k+1))- sum(bList):
        print('+'+ str(found))
    else:
        print('*')