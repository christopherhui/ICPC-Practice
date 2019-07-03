aNum = int(input())
aMap = {}
for i in range(aNum):
  string = ''.join([x[0] for x in input().split()])
  if string not in aMap:
    aMap[string] = 0
  else:
    aMap[string] += 1
sum = 0
for val in aMap:
  sum += (aMap[val]*(aMap[val]+1))//2
print(sum)