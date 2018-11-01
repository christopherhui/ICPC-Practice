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

print(graph)
print(visited)

for _ in range(m + 1):
    someList = input().split()
    start = someList[len(someList) - 1]
    end = someList[0]
    print("Start: %s" % start)
    print("End: %s" % end)