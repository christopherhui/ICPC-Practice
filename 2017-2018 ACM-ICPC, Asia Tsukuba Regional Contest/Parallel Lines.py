from fractions import Fraction
import math
import operator
 
n = int(input())
lines = []
for i in range(n):
  lines.append([int(x) for x in input().split()])
listOfSlopes = {}
usedUpSlopes = {}
alllines = {}
 
for i in range(n):
  aList = []
  for j in range(i+1, n):
    lineOne = lines[i]
    lineTwo = lines[j]
    denom =  lineTwo[1]-lineOne[1];
    val = Fraction(lineTwo[0]-lineOne[0], denom) if denom != 0 else math.inf
    
    if val not in alllines:
      alllines[val] = []
    alllines[val].append([lineOne, lineTwo])
 
 
    if val in usedUpSlopes:
      if lineOne in usedUpSlopes[val] or lineTwo in usedUpSlopes[val]:
        continue
    else:
      usedUpSlopes[val] = list()
    usedUpSlopes[val].append(lineOne)
    usedUpSlopes[val].append(lineTwo)
      
    aList.append(val)
    if val not in listOfSlopes:
      listOfSlopes[val] = 1
    else:
      listOfSlopes[val] += 1
 
pairs = 0
used = []
listOfSlopes = sorted(listOfSlopes.items(), key=operator.itemgetter(1))
listOfSlopes.reverse()
 
for thing in listOfSlopes:
  key = thing[0]
  val = thing[1]
  count = 0
  for point in alllines[key]:
    if point[0] not in used and point[1] not in used:
      count += 1
      used.append(point[0])
      used.append(point[1])
 
  pairs += (count * (count-1))//2
 
print(pairs)