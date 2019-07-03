thing = input()
if len(thing) == 3:
  print((int(thing[1]) + 12 - int(thing[0])) * int(thing[2]))
elif len(thing) == 4:
  if (int(thing[0]) == 1):
    print((int(thing[2]) + 12 - int(thing[0:2])) * int(thing[3]))
  else:
    print((int(thing[1:3]) + 12 - int(thing[0])) * int(thing[3]))
else:
  print((int(thing[2:4]) + 12 - int(thing[0:2])) * int(thing[4]))