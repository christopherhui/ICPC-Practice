def contFraction(aList, i):
    if i == len(aList)-1:
        return aList[len(aList)-1]
    else:
        return aList[i] + 1/contFraction(aList, i+1)

def printFraction(num):
    if num >= 1:
        print(int(num), end=' ')
        return printFraction(num - int(num))
    if num == 0:
        return
    else:
        length = len(str(num)) - 2
        numer = int(num * 10 ** length)
        denom = 10 ** length
        if denom % numer == 0:
            print(int(denom / numer), end=' ')
            print()
            return
        ans = denom // num
        print(ans, end=' ')
        return printFraction((num * ans) / denom)

aList = [int(x) for x in input().split()]
ansR1 = contFraction([int(x) for x in input().split()], 0)
ansR2 = contFraction([int(x) for x in input().split()], 0)
bList = [int(x) for x in input().split()]
printFraction(ansR1+ansR2)
printFraction(ansR1-ansR2)
printFraction(ansR1*ansR2)
printFraction(ansR1/ansR2)