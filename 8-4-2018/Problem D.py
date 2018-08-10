from sys import stdin, stdout

aList = [int(x) for x in stdin.readline().split()]
n = aList[0]
m = aList[1]
bList = [int(x) for x in stdin.readline().split()]
bList.reverse()
hashTable = {}
unique = [0] * n
i = 0
for num in bList:
  if num not in hashTable:
    hashTable[num] = 1
    unique[i] = unique[i - 1] + 1
    i += 1
  else:
    unique[i] = unique[i - 1]
    i += 1

for i in range(0, m):
   a = int(stdin.readline()) - 1
   stdout.write(str(unique[n - a - 1]) + '\n')
