from sys import stdin, stdout

aList = [int(x) for x in stdin.readline().split()]
n = aList[0]
p = aList[1]

carDistReal = [int(x) for x in stdin.readline().split()]
carDistReal.sort()

count = carDistReal[0]
carDistExp = []
for i in range(n):
    carDistExp.append(p * i + p)

for i in range(n-1, -1, -1):
    if carDistReal[i] >= carDistExp[i]:
        continue
    else:
        difference = carDistExp[i] - carDistReal[i]
        carDistReal = list(map(lambda x: x + difference, carDistReal))
        count += difference

stdout.write(count)


