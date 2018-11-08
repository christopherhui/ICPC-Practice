from collections import defaultdict

class Graph:
    def __init__(self, V):
        self.vertices = V
        self.graph = [[0 for x in range(self.vertices)] for y in range(self.vertices)]

    def add_node(self, u, v):
        self.graph[u][v] = 1
        self.graph[v][u] = 1


aList = [int(x) for x in input().split()]
v, n = aList[0], aList[1]
g = Graph(v)
for i in range(g.vertices):
    bList = [int(x) for x in input().split()]
    g.add_node(bList[0], bList[1])
n = int(input())
cList = [int(x) for x in input().split()]
