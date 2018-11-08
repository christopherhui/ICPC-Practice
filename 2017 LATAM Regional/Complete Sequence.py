aList = [int(x) for x in input().split()]
k, n = aList[0], aList[1]
data = [int(x) for x in input().split()]

def isSolution(counts):
    start = 0
    for key in counts:
        if start == 0:
            same = counts[key]
            start += 1
        elif same != counts[key]:
            return False
    return True

def getCounts(data):
    counts = {}
    for i in range(1, k+1):
        counts[i] = 0
    for j in data:
        counts[j] += 1
    return counts

counts = getCounts(data)
found = False
x = min(counts, key=counts.get)
y = max(counts, key=counts.get)
if isSolution(getCounts(data + [x])):
    print('+'+str(x))
    found = True
a = data.copy()
a.pop(a.index(y))
if isSolution(getCounts(a)) and not found:
    print('-'+str(y))
    found = True
b = data.copy()
b += [x]
b.pop(b.index(y))
if isSolution(getCounts(b)) and not found:
    print('-'+str(y), '+'+str(x))
    found = True
if not found:
    print('*')