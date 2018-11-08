aList = [int(x) for x in input().split()]
n = aList[0]
d = aList[1]
k = aList[2]
aMap = {}
for _ in range(n):
    bList = input().split()
    aMap[bList[0]] = int(bList[1])

count = 0
found = False
firedList = {}
for _ in range(k):
    maxSF = -1
    maxPer = ''
    for key in aMap:
        if aMap[key] > maxSF:
            maxSF = aMap[key]
            maxPer = key
    count += 1
    d -= maxSF
    firedList[maxPer] = maxSF
    del aMap[maxPer]
    if d < 0:
        print(count)
        for person in firedList:
            print(person + ',', "YOU ARE FIRED!")
        found = True
        break

if not found:
   print("impossible")