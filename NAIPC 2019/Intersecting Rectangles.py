class Rectangle():
    def __init__(self, xBot, yBot, xTop, yTop):
        self.xBot = xBot
        self.yBot = yBot
        self.xTop = xTop
        self.yTop = yTop

def takeBotXBot(elem):
    return elem.xBot

def takeBotXTop(elem):
    return elem.xTop

def takeBotYBot(elem):
    return elem.yBot

def takeBotYTop(elem):
    return elem.yTop

n = int(input())
rectList = []
for i in range(n):
    aList = [int(x) for x in input().split()]
    r = Rectangle(aList[0], aList[1], aList[2], aList[3])
    rectList.append(r)

sortedBotX = sorted(rectList, key=takeBotXBot)
sortedTopX = sorted(rectList, key=takeBotXTop)
sortedBotY = sorted(rectList, key=takeBotYBot)
sortedTopY = sorted(rectList, key=takeBotYTop)
found = False

for i in range(1, len(sortedBotX)):
    if sortedBotX[i-1].xBot > sortedBotX[i].xTop or sortedBotX[i-1].xTop < sortedBotX[i].xBot:
        continue
    elif sortedBotX[i-1].yBot > sortedBotX[i].yTop or sortedBotX[i-1].yTop < sortedBotX[i].yBot:
        continue
    elif sortedBotX[i-1].yBot > sortedBotX[i].yBot and sortedBotX[i-1].xBot > sortedBotX[1].xBot and sortedBotX[i-1].yTop < sortedBotX[i].yTop and sortedBotX[i-1].xTop < sortedBotX[i].xTop:
        continue
    elif sortedBotX[i-1].xBot < sortedBotX[i].xBot and sortedBotX[i-1].yBot < sortedBotX[1].yBot and sortedBotX[i-1].xTop > sortedBotX[i].xTop and sortedBotX[i-1].yTop > sortedBotX[i].yTop:
        continue
    else:
        print(1)
        found = True
        break
if not found:
    for i in range(1, len(sortedTopX)):
      if sortedTopX[i-1].xBot > sortedTopX[i].xTop or sortedTopX[i-1].xTop < sortedTopX[i].xBot:
          continue
      elif sortedTopX[i-1].yBot > sortedTopX[i].yTop or sortedTopX[i-1].yTop < sortedTopX[i].yBot:
          continue
      elif sortedTopX[i-1].yBot > sortedTopX[i].yBot and sortedTopX[i-1].xBot > sortedTopX[1].xBot and sortedTopX[i-1].yTop < sortedTopX[i].yTop and sortedTopX[i-1].xTop < sortedTopX[i].xTop:
          continue
      elif sortedTopX[i-1].xBot < sortedTopX[i].xBot and sortedTopX[i-1].yBot < sortedTopX[1].yBot and sortedTopX[i-1].xTop > sortedTopX[i].xTop and sortedTopX[i-1].yTop > sortedTopX[i].yTop:
          continue
      else:
          print(1)
          found = True
          break
if not found:
    for i in range(1, len(sortedTopX)):
      if sortedBotY[i-1].xBot > sortedBotY[i].xTop or sortedBotY[i-1].xTop < sortedBotY[i].xBot:
          continue
      elif sortedBotY[i-1].yBot > sortedBotY[i].yTop or sortedBotY[i-1].yTop < sortedBotY[i].yBot:
          continue
      elif sortedBotY[i-1].yBot > sortedBotY[i].yBot and sortedBotY[i-1].xBot > sortedBotY[1].xBot and sortedBotY[i-1].yTop < sortedBotY[i].yTop and sortedBotY[i-1].xTop < sortedBotY[i].xTop:
          continue
      elif sortedBotY[i-1].xBot < sortedBotY[i].xBot and sortedBotY[i-1].yBot < sortedBotY[1].yBot and sortedBotY[i-1].xTop > sortedBotY[i].xTop and sortedBotY[i-1].yTop > sortedBotY[i].yTop:
          continue
      else:
          print(1)
          found = True
          break
if not found:
    for i in range(1, len(sortedTopX)):
      if sortedTopY[i-1].xBot > sortedTopY[i].xTop or sortedTopY[i-1].xTop < sortedTopY[i].xBot:
          continue
      elif sortedTopY[i-1].yBot > sortedTopY[i].yTop or sortedTopY[i-1].yTop < sortedTopY[i].yBot:
          continue
      elif sortedTopY[i-1].yBot > sortedTopY[i].yBot and sortedTopY[i-1].xBot > sortedTopY[1].xBot and sortedTopY[i-1].yTop < sortedTopY[i].yTop and sortedTopY[i-1].xTop < sortedTopY[i].xTop:
          continue
      elif sortedTopY[i-1].xBot < sortedTopY[i].xBot and sortedTopY[i-1].yBot < sortedTopY[1].yBot and sortedTopY[i-1].xTop > sortedTopY[i].xTop and sortedTopY[i-1].yTop > sortedTopY[i].yTop:
          continue
      else:
          print(1)
          found = True
          break
if not found:
  print(0)
