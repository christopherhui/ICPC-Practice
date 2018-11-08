from collections import deque

def bfs(graph, start, end):
    queue = deque()
    if start in graph:
        queue.append(start)
    visited[start] = True
    while queue:
        x = queue.pop()
        for y in graph[x]:
            if y == end:
                return True
            if not visited[y]:
                queue.append(y)
                visited[y] = True
    return False

aList = [int(x) for x in input().split()]
n = aList[0]
m = aList[1]
graph = {}
visited = {}

for _ in range(n):
    statement = input().split()
    worseCountry = statement[0]
    betterCountry = statement[len(statement) - 1]
    if betterCountry not in graph:
        graph[betterCountry] = [worseCountry]
    else:
        graph[betterCountry].append(worseCountry)
    if worseCountry not in graph:
        graph[worseCountry] = []
    if betterCountry not in visited:
        visited[betterCountry] = False
    if worseCountry not in visited:
        visited[worseCountry] = False

for _ in range(m):
    someList = input().split()
    start = someList[len(someList) - 1]
    end = someList[0]
    temp1 = visited.copy()
    temp2 = visited.copy()
    a = bfs(graph, start, end)
    visited = temp1
    b = bfs(graph, end, start)
    visited = temp2
    if a:
         print("Fact")
    elif b:
         print("Alternative Fact")
    else:
         print("Pants on Fire")