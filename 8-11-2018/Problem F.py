n = int(input())
aList = []
for i in range(0, n):
    problem = input()
    if problem == "P = NP":
        print("skipped")
    else:
        for c, val in enumerate(aList, 0):
            if c == '+':
                print(int(str[:val]) + int(str[val + 1:]))

