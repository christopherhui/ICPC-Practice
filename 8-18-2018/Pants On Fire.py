from collections import deque


def bfs(graph, visited, start, end):
    queue = deque()
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

'''
graph = {'Americans': ['Mexicans', 'Canadians'],
         'Mexicans': ['Russians'],
         'German': ['NorthKoreans'],
         'Canadians': [],
         'Russians': [],
         'NorthKoreans': []}

visited = {'Americans': False,
           'Mexicans': False,
           'Canadians': False,
           'Russians': False,
           'German': False,
           'NorthKoreans': False}
'''
# graph = {'stuff': ['stuff']}

# start = 'Russians'
# end = 'Americans'

# start with parsing n and m
aList = [int(x) for x in input().split()]
n = aList[0]
m = aList[1]
graph = {}
visited = {}

# creation of graph and visited dict.
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
    print(bfs(graph, visited, start, end))