import math

class Graph:
    def __init__(self, V, E):
        self.vertices = V + 1
        self.edges = E
        self.graph = [[0 for x in range(self.vertices)] for y in range(self.vertices)]

    def add_edge(self, u, v, w):
        self.graph[u][v] = w
        self.graph[v][u] = w

    def min_distance(self, distanceList, visited):

        min_index = 'uh'
        min = math.inf
        for v in range(self.vertices):
            if distanceList[v] < min and visited[v] == False:
                min = distanceList[v]
                min_index = v
        return min_index

    def print_solution(self, parent, j):
        if parent[j] == -1:
            print(j, end=' ')
            return
        self.print_solution(parent, parent[j])
        print(j, end=' ')

    def dijkstra(self, s):

        visited = [False] * (self.vertices)
        distanceList = [math.inf] * (self.vertices)
        distanceList[s] = 0
        parent = [-1] * self.vertices

        for i in range(min(self.vertices - 1, self.edges)):

            u = self.min_distance(distanceList, visited)
            if u == 'uh':
                if parent[self.vertices - 1] == -1:
                    print(-1)
                else:
                    self.print_solution(parent, self.vertices - 1)
                return
            visited[u] = True

            for v in range(self.vertices):
                if self.graph[u][v] > 0 and visited[v] == False and \
                        distanceList[v] > distanceList[u] + self.graph[u][v]:
                    distanceList[v] = distanceList[u] + self.graph[u][v]
                    parent[v] = u

        if parent[self.vertices - 1] == -1: print(-1)
        else:
            self.print_solution(parent, self.vertices - 1)

aList = [int(x) for x in input().split()]
n = aList[0]
m = aList[1]
graph = Graph(n, m)
for _ in range(m):
    bList = [int(x) for x in input().split()]
    graph.add_edge(bList[0], bList[1], bList[2])
graph.dijkstra(1)
'''
10 10
1 5 12
2 4 140
2 10 149
3 6 154
3 7 9
3 8 226
3 10 132
4 10 55
5 8 33
7 8 173
ans: 1 5 8 7 3 10 
'''