aList = [int(x) for x in input().split()]
k, n = aList[0], aList[1]
bList = [int(x) for x in input().split()]
aMap = {}
cList = []
for i in bList:
    if i not in aMap:
        aMap[i] = 1
    else:
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
        print('*')
elif len(cList) == 1:
    if len(aMap) == 1:
        print('-'+ str(cList[0]))
    elif aMap[cList[0]] == min(aMap):
        print('+'+ str(cList[0]))
    elif aMap[cList[0]] == max(aMap):
        print('-'+ str(cList[0]))
    else:
        print('*')
else:
    print('*')