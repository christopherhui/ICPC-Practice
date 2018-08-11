aList = [int(x) for x in input().split()]
n, m = aList[0], aList[1]
map = {}
king = input()
map[king] = 1
tree = []
for i in range(n):
    b = input().split()
    tree.append(b)

repeat = False

while not repeat:
    for i in range(n):
        temp = None
        if famTree[0] in map:
            temp = map[famTree[0]]
        famTree = tree[i]
        if famTree[1] in map:
            if famTree[2] in map:
                map[famTree[0]] = (map[famTree[1]] + map[famTree[2]]) / 2
            else:
                map[famTree[0]] = (map[famTree[1]]) / 2
                map[famTree[2]] = 0

        elif famTree[2] in map:
            if famTree[1] in map:
                map[famTree[0]] = (map[famTree[1]] + map[famTree[2]]) / 2
            else:
                map[famTree[0]] = (map[famTree[2]]) / 2
                map[famTree[1]] = 0

        if temp != None and temp != map[famTree[0]]:
            repeat = True

max = 0
maxPer = ''
for i in range(m):
    a = input()
    if a in map and map[a] > max:
        max = map[a]
        maxPer = a

print(maxPer)