from collections import defaultdict, deque

n = int(input())
adj_mat = defaultdict(set)
visited = defaultdict(bool)
parent = {}

for _ in range(n):
    values = input().split()
    for val in values[1:]:
        adj_mat[values[0]].add(val)
        adj_mat[val].add(values[0])
    visited[values[0]] = False

start, end = input().split()
visited[start] = True
dq = deque()
dq.append(start)
parent[start] = ''
found = False

while len(dq) > 0:
    next_city = dq.popleft()
    if next_city == end:
        found = True
        break

    for cities in adj_mat[next_city]:
        if not visited[cities]:
            visited[cities] = True
            parent[cities] = next_city
            dq.append(cities)

if found:
    a = []
    curr = end
    while parent[curr] != '':
        a.append(curr)
        curr = parent[curr]
    a.append(start)
    a.reverse()
    print(' '.join(a))
else:
    print('no route found')