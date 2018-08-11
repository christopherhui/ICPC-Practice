aList = [int(x) for x in input().split()]
n = aList[0]
p = aList[1]

carDistReal = [int(x) for x in input().split()]
carDistReal.sort()

carDistExp = []
for i in range(n):
    carDistExp.append(p * n + p)


