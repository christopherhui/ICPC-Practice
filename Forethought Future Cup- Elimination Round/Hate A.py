val = input()
newVal = val.replace('a', '')
if len(newVal) == 0:
  print(val)
else:
  if len(newVal) % 2 == 1:
    print(':(')
  elif val[0:len(val)-len(newVal)//2] + newVal[0:len(newVal)//2] == val:
    print(val[0:len(val)-len(newVal)//2])
  else:
    print(':(')