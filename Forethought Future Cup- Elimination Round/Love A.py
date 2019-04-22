val = input()
numA = 0
numElse = 0
for i in val:
  if i == 'a':
    numA += 1
  else:
    numElse += 1

ans = len(val)
while numElse >= numA:
  numElse -= 1
  ans -= 1
print(ans)