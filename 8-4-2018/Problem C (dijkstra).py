import math

class Graph:
    def __init__(self, V):
        self.vertices = V + 1
        self.graph = [[0 for x in range(self.vertices)] for y in range(self.vertices)]

    def add_edge(self, u, v, w):
        self.graph[u][v] = w

    def min_distance(self, distanceList, visited):

        min = math.inf
        for v in range(self.vertices):
            if distanceList[v] < min and visited[v] == False:
                min = distanceList[v]
                min_index = v
        return min_index

    def dijkstra(self, s):

        visited = [False] * (self.vertices)
        distanceList = [math.inf] * (self.vertices)
        distanceList[s] = 0

        for i in range(self.vertices - 1):

            u = self.min_distance(distanceList, visited)
            visited[u] = True

            for v in range(self.vertices):
                if self.graph[u][v] > 0 and visited[v] == False and \
                    distanceList[v] > distanceList[u] + self.graph[u][v]:
                    distanceList[v] = distanceList[u] + self.graph[u][v]

        return distanceList

aList = [int(x) for x in input().split()]
n = aList[0]
m = aList[1]
graph = Graph(n)
for _ in range(m):
    bList = [int(x) for x in input().split()]
    graph.add_edge(bList[0], bList[1], bList[2])
print(graph.dijkstra(1))

'''
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1
'''