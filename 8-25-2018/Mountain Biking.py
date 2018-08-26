import math
'''
a = math.cos(1.0472) * 9
b = math.sqrt(((2)*(a)*(100)))
print(b)

c = math.sqrt( 2 * 4.5 * 69 + 30 ** 2 )
print(c)
'''
aList = [float(x) for x in input().split()]
n = int(aList[0])
g = aList[1]
slopeList = []
prevvel = 0
veloList = []
for _ in range(n):
    slopeList.append([int(x) for x in input().split()])
for i in range(n - 1, -1, -1):
    slope = slopeList[i]
    rad = math.pi * slope[1] / 180
    dist = slope[0]
    accel = g * math.cos(rad)
    vel = math.sqrt( prevvel ** 2 + 2 * accel * dist )
    veloList.append(vel)
    prevvel = vel
for i in range(n - 1, -1, -1):
    print(round(veloList[i], 5))

'''
#!/usr/bin/env python3
import math
import itertools
from sys import stdin

n,g = map(float, stdin.readline().split())
v = [list(map(lambda x: x[0]*math.cos(math.radians(x[1])), [[float(i) for i in stdin.readline().split()]]))[0] for z in range(int(n))]
for i in list(itertools.accumulate(v[::-1]))[::-1]: print(math.sqrt(2*g*i))

'''