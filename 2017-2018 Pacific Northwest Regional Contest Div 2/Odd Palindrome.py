def isPalindrome(string):
  if len(string) == 1:
    return True
  else:
    return string[0] == string[len(string)-1] and isPalindrome(string[1:len(string)-1])

string = input()
if len(string) % 2 != 0 and isPalindrome:
  print("Odd.")
else:
  print("Or not.")