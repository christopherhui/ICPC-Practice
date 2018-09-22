from collections import Counter

n = int(input())
m = int(input())
aList = [int(x) for x in input().split()]
bList = [int(x) for x in input().split()]
c = Counter()
for a in aList:
    for b in bList:
        if b > a:
            c[b-a] += 1

print(c.most_common()[0][0])
# Runtime error