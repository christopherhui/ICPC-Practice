n = int(input())
aList = []
for i in range(0, n):
    problem = input()
    if problem == "P=NP":
        print("skipped")
    else:
        for c, val in enumerate(problem, 0):
            if val == '+':
                print(int(problem[:c]) + int(problem[c + 1:]))
