aList = [x for x in input().split()]
aList.pop(0)
n = input()
minVal = 1000
for i in range(0, 1000):
    ok = True
    for a in aList:
        if a in str(i):
            ok = False
    if ok:
        minVal = min(minVal, abs(int(n)-i))

print(minVal)