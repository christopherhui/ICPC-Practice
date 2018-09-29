rebus = input()
aList = rebus.split()
initSum = int(aList[len(aList) - 1])
pluses = 1
minuses = 0
for char in aList:
    if char == "+":
        pluses += 1
    elif char == '-':
        minuses += 1
finSum = initSum + minuses
if finSum > pluses * initSum or finSum < pluses - minuses:
    print("Impossible")
else:
    print("Possible")
    sum = initSum
    if pluses == 1:
        print(initSum,'=',initSum)

    elif pluses > minuses:
        sum += initSum * minuses
        for c, char in enumerate(aList, 0):
            if c == 0:
                print(1, end=' ')
                sum -= 1

            if c == len(aList) - 4:
                print('+',str(abs(sum)), '=',str(initSum))
                break

            if char == "+":
                if sum > initSum:
                    sum -= initSum
                    print('+', str(initSum) + ' ', end='')
                else:
                    sum -= 1
                    print('+ 1 ', end='')

            elif char == '-':
                print('-', str(initSum) + ' ', end='')
    elif pluses < minuses:
        sum -= initSum * pluses
        for c, char in enumerate(aList, 0):
            if c == 0:
                print(1, end=' ')
                sum -= 1

            if c == len(aList) - 4:
                print('+',str(abs(sum)), '=',str(initSum))
                break

            if char == "+":
                print('+', str(initSum) + ' ', end='')

            elif char == '-':
                if sum < initSum:
                    sum += initSum
                    print('-', str(initSum) + ' ', end='')
                else:
                    sum += 1
                    print('- 1 ', end='')