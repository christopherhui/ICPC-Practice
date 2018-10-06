def moveDown(pos):
  pos -= 1
  while visited[pos]:
    pos -= 1 
  return pos

def moveUp(pos):
  pos += 1
  while visited[pos]:
    pos += 1 
  return pos

n = int(input())
mov = input()
prevPos = 1
pos = 1
visited = {}
for i in range(n+1):
  visited[i] = False
   
for i in mov:
   if i == 'L':
      pos += 1
   else:
      break
print(pos)
visited[pos] = True

for c, val in enumerate(mov, 0):
  if c+1 < n-1 and mov[c+1] != val:

    if mov[c+1] == 'L':
      count = 0
      for j in range(c+1, n-1):
        if mov[j] != val:
          count += 1
        else:
          break
      if count != 1: pos += count + 1
      else: pos += count
      if visited[pos]:
        pos = moveUp(pos) + count
        print(pos)
        visited[pos] = True
      else:
        print(pos)
        visited[pos] = True

    if mov[c+1] == 'R':       
      count = 0
      for j in range(c+1, n-1):
        if mov[j] != val:
          count -= 1
        else:
          break
      if count != -1: pos += count - 1
      else: pos += count
      if visited[pos]:
        pos = moveDown(pos) + count
        print(pos)
        visited[pos] = True
      else:
        print(pos)
        visited[pos] = True         
  else:
    if val == 'L':
      pos = moveDown(pos)
      print(pos)
      visited[pos] = True

    if val == 'R':
      pos = moveUp(pos)
      print(pos)
      visited[pos] = True
