n = int(input())
order = input()
visited = {}

for i in range(n):
  visited[i] = False

pos = 1
for i in range(0, n-1):
  if order[i] == 'L':
    pos += 1
  else:
    break
visited[pos-1] = True
print(pos)

for c, val in enumerate(order, 0):
  if c+1 > n-1:
      print(pos)    
      
  elif order[c+1] == val:
    j = 0
    if val == 'L':
      j = -1
      while visited[pos+j] == True:
        pos -= 1
        j -= 1
      print(pos)
      visited[pos-1] = True     
    if val == 'R':
      j = 1
      while visited[pos+j] == True:
        pos += 1
        j += 1
      print(pos)
      visited[pos-1] = True

  elif order[c+1] != val:
    if val == 'L':
      i = 0
      pos -= 1
      while c+1+i < n-1 and order[c+1+i] != val:
        pos -= 1
        i += 1
      print(pos)
      visited[pos-1] = True       
    if val == 'R':
      i = 0
      pos += 1
      while c+1+i < n-1 and order[c+1+i] != val:
        pos += 1
        i += 1
      print(pos)
      visited[pos-1] = True       
