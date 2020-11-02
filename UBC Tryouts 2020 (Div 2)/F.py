from collections import Counter

n = int(input())
for _ in range(n):
    a = input().lower()
    a = Counter(a)
    b = []
    for i in range(26):
        if chr(ord('a') + i) not in a:
            b.append(chr(ord('a') + i))
    if len(b) == 0:
        print('pangram')
    else:
        print('missing', ''.join(b))

