n = int(input())
aList = []
for i in range(0, n):
  moves = input()
  aList.append(str)

count = 0
found = True

for moves in aList:
  for c, move in enumerate(1, len(moves)):
    if move == 'D' and moves[c + 1] == 'C':
      found = False

  if found:
    count += 1