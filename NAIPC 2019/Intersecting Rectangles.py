class Rectangle():
    def __init__(self, xBot, yBot, xTop, yTop):
        self.xBot = xBot
        self.yBot = yBot
        self.xTop = xTop
        self.yTop = yTop

def takeBotX(elem):
    return elem.xBot

def takeBotY(elem):
    return elem.yBot

n = int(input())
rectList = []
for i in range(n):
    aList = [int(x) for x in input().split()]
    r = Rectangle(aList[0], aList[1], aList[2], aList[3])
    rectList.append(r)

sortedBotX = sorted(rectList, key=takeBotX)
sortedBotY = sorted(rectList, key=takeBotY)
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
    print(0)



