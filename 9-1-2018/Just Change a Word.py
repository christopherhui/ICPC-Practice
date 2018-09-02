s = input()
aMap = {}
for i in s:
  if i in aMap:
    aMap[i] += 1
  else:
    aMap[i] = 1
mostLet = aMap[max(aMap, key=aMap.get)]
if len(s) % 2 != 0:
  print("NO")
elif mostLet > len(s)/2:
  print("NO")
else:
  print("YES")
