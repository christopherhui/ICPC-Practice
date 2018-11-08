aList = input().split()
if aList[0] == 'E':
  prevLet = ''
  counter = 0
  for let in aList[1]:
    if let == prevLet:
      counter += 1
    elif let != prevLet and counter == 0:
      print(let, end='')
      prevLet = let
      counter += 1
    elif let != prevLet and counter > 0:
      print(str(counter), end='')
      print(let, end='')
      counter = 1
      prevLet = let
  print(counter, end='')

elif aList[0] == 'D':
  for i in range(0, len(aList[1]), 2):
print(aList[1][i] * int(aList[1][i+1]), end='')
