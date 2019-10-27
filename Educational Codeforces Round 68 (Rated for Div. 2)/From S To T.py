def isSubSequence(string1, string2, m, n): 
    if m == 0:    return True
    if n == 0:    return False
  
    if string1[m-1] == string2[n-1]: 
        return isSubSequence(string1, string2, m-1, n-1) 
  
    return isSubSequence(string1, string2, m, n-1) 
q = int(input())
for _ in range(q):
  s = input()
  t = input()
  p = input()
  found = True
  if not isSubSequence(s, t, len(s), len(t)):
    print('NO')
  else:
    aMap = {}
    for i in s:
      if i not in aMap:
        aMap[i] = -1
      else:
        aMap[i] -= 1
    for j in p:
      if j in aMap:
        aMap[j] -= 1
      else:
        aMap[j] = -1
    for k in t:
      if k not in aMap:
        print('NO')
        found = False
        break
      aMap[k] += 1
    if found:
      for val in aMap:
        if aMap[val] > 0 and val in t:
          print('NO')
          found = False
          break
    if found:
      print('YES')
  