aList = [int(x) for x in input().split()]
n = aList[0]
p = aList[1]
count = 1

carDistReal = [int(x) for x in input().split()]
carDistReal.sort()


carDistExp = []
for i in range(n):
    carDistExp.append(p * i + p)

for i in range(n):
    if carDistReal[i] >= carDistExp[i]:
        continue
    else:
        difference = carDistExp[i] - carDistReal[i]
        carDistReal = list(map(lambda x: x + difference, carDistReal))
        count += difference




