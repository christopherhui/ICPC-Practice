import math

string = input().split()
vowels = []
softconsonants = {'b': ord('b'), 'c': ord('c'), 'd': ord('d'), 'g': ord('g'),
                  'k': ord('k'), 'n': ord('n'), 'p': ord('p'), 't': ord('t')}
hardconsonants = {'B': ord('B'), 'C': ord('C'), 'D': ord('D'), 'G': ord('G'),
                  'K': ord('K'), 'N': ord('N'), 'P': ord('P'), 'T': ord('T')}
vowels = {'a': ord('a'), 'o': ord('o'), 'u': ord('u')}

def find_closest(str, list):
    min = math.inf
    val = ''
    for i in list:
        if math.fabs(list[i] - ord(str)) < min:
            min = math.fabs(list[i] - ord(str))
            val = i
    return val

for c, substring in enumerate(string, 0):
    newString = substring
    if '-' in newString:
        bulbul = newString.split()
        for d, val in enumerate(bulbul, 0):
            if d == 0:
                if val[0] not in hardconsonants:
                    newString = find_closest(substring[0], hardconsonants) + val[1:]
                    hardlet = ord(chr(find_closest(substring[0], hardconsonants)) + 32)
            elif

    else:
        if c == 0:
            if newString[0] not in hardconsonants:
                newString = find_closest(substring[0], hardconsonants) + substring[1:]
        elif newString[0] not in softconsonants:
            newString = find_closest(substring[0], softconsonants) + substring[1:]
        if newString[len(substring) - 1] in hardconsonants:
            newString = newString[len(substring) -1] + find_closest(newString[len(substring) - 1], vowels) + 'h'
        string[c] = newString

print(' '.join(string))