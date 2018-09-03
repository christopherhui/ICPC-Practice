aList = [int(x) for x in input().split()]
k, n = aList[0], aList[1]
data = [int(x) for x in input().split()]

counts = {}
for i in range(1, k+1):
    counts[i] = 0
for i in data:
    counts[i] += 1

countsofcounts = {}
for num, count in counts.items():
    if count not in countsofcounts:
        countsofcounts[count] = 1
    else:
        countsofcounts[count] += 1

counter = 0
target = max(countsofcounts, key=countsofcounts.get)
add, sub = '', ''

for num, count in counts.items():
    if count != target:
        if count < target:
            add = "+" + str(num)
        else:
            sub = "-" + str(num)
        counter += abs(count - target)

if counter >= 3:
    print("*")
elif counter == 2:
    if sub != '' or add != '':
        print(sub, add)
elif counter == 1:
    if add == '':
        print(sub)
    else:
        print(add)