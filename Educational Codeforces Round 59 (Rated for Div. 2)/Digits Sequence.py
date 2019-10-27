q = int(input())
for _ in range(q):
  n = int(input())
  s = input()
  first = int(s[0])
  second = int(s[1:])
  if (first < second):
    print('YES')
    print(2)
    print(first, second)
  else:
    print('NO')