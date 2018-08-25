import math

class Graph:
    def __init__(self, V):
        self.vertices = V
        self.graph = [[0 for x in range(self.vertices)] for y in range(self.vertices)]

    def add_edge(self, u, v, w):
        self.graph[u][v] = w

    def dijkstra(self, s):

        for c, val in enumerate(self.graph[s], 0):
            if val > 0:
                distanceList[c] = val



aList = [int(x) for x in input().split()]
n = aList[0]
m = aList[1]
graph = Graph(n)
for _ in range(m):
    bList = [int(x) for x in input().split()]
    graph.add_edge(bList[0], bList[1], bList[2])

visited = [False] * graph.vertices
distanceList = [math.inf] * graph.vertices
distanceList[1] = 0

