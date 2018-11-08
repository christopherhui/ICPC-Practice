word = input()
aList = list(word)
bList = ["_"] * len(word)
n = int(input())
for i in range(0, n):
    let = input()
    if let in aList:
        for i in range(0, len(word)):
            if aList[i] == let:
                bList[i] = let
    print(''.join(bList))