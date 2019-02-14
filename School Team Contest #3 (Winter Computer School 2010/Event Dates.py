def thing(element):
    return element[1]

t = int(input())
aList = []
usedList = []
cList = []
for i in range(t):
    bList = [int(x) for x in input().split()]
    bList = (bList, bList[1] - bList[0], i)
    aList.append(bList)
aList.sort(key=thing)
for i in aList:
    tuple = i[0]
    for j in range(tuple[0], tuple[1]+1):
        if j not in usedList:
            cList.append((j, i[2]))
            usedList.append(j)
            break
cList.sort(key=thing)
print(' '.join([str(x[0]) for x in cList]))