aList = [int(x) for x in input().split()]
bList = []
for i in range(aList[0]):
    bList.append(input())
visited = [[False for x in range(aList[1])] for y in range(aList[0])]
count = 0
for x, i in enumerate(bList, 0):

    for y, let in enumerate(i, 0):
        if let == 'L' and not visited[x][y]:
            queue = [(x, y)]
            visited[x][y] = True

            while queue:
                cord = queue.pop(0)
                cList = []
                x, y = cord[0], cord[1]
                if x - 1 >= 0:
                    cList.append((x - 1, y))
                if x + 1 < aList[0]:
                    cList.append((x + 1, y))
                if y - 1 >= 0:
                    cList.append((x, y - 1))
                if y + 1 < aList[1]:
                    cList.append((x, y + 1))
                for newCord in cList:
                    if bList[newCord[0]][newCord[1]] == 'L' or bList[newCord[0]][newCord[1]] == 'C' and not visited[newCord[0]][newCord[1]]:
                        queue.append(newCord)
                        visited[newCord[0]][newCord[1]] = True

            count += 1

print(count)