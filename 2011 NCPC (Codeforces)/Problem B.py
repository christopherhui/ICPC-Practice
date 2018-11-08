n = input()
aList = [int(x) for x in input().split()]

count = 0

for i in range(0, aList - 2):
  for j in range(1, aList - 1):
    for l in range(2, aList):
      if aList[i] > aList[j] > aList[l]:
        count += 1

print(count)

