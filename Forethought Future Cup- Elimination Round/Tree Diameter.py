import sys

t = int(input())
for _ in range(t):
    n = int(input())
    maxVal = 0
    for i in range(7):
        aList = []
        bList = []
        for j in range(n):
            if (j >> i) % 2 == 1:
                aList.append(j+1)
            else:
                bList.append(j+1)
        if len(aList) > 0 and len(bList) > 0:
            print(len(aList), len(bList), ' '.join([str(x) for x in aList]), ' '.join([str(x) for x in bList]))
            sys.stdout.flush()
            maxVal = max(maxVal, int(input()))
    print(-1, maxVal)
    sys.stdout.flush()