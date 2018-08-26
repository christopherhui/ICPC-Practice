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
        bulbul = newString.split('-')
        hardlet = -1
        for d, val in enumerate(bulbul, 0):
            newnewString = val
            if d == 0 and c == 0:
                if newnewString[0] not in hardconsonants:
                    z = find_closest(val[0], hardconsonants)
                    newnewString = z + newnewString[1:]
                    hardlet = z.lower()
                else:
                    hardlet = newnewString[0].lower()
            elif d == 0:
                if newnewString[0] not in softconsonants:
                    z = find_closest(val[0], softconsonants)
                    newnewString = z + newnewString[1:]
                    hardlet = z.lower()
                else:
                    hardlet = newnewString[0].lower()
            elif newnewString[0] in softconsonants and hardlet != -1:
                newnewString = hardlet + newnewString[1:]
            if newnewString[len(val) - 1] in hardconsonants or newString[len(substring) - 1] in softconsonants and d == len(bulbul) -1:
                newnewString = newnewString[:len(val)] + find_closest(newnewString[len(val) - 1], vowels) + 'h'
            bulbul[d] = newnewString
        string[c] = ''.join(bulbul)

    else:
        if c == 0:
            if newString[0] not in hardconsonants:
                newString = find_closest(substring[0], hardconsonants) + substring[1:]
        elif newString[0] not in softconsonants:
            newString = find_closest(substring[0], softconsonants) + substring[1:]
        if newString[len(substring) - 1] in hardconsonants or newString[len(substring) - 1] in softconsonants:
            newString = newString[:len(substring)] + find_closest(newString[len(substring) - 1], vowels) + 'h'
        string[c] = newString

a = ' '.join(string)
has_n = False
for c, i in enumerate(a, 0):
    if i == 'n':
        has_n = True
    elif i == 'g' and has_n == True:
        a = a[:c - 1] + 'c' + 'c' + a[c + 1:]
    else:
        has_n = False

print(a)