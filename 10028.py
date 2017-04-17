numCasos = int(input())
i=0

while(i < numCasos):
  data = raw_input()
  issueDate = data

  isSameCase = true
  while(isSameCase):
    data = raw_input()
    data = data.split()
    date = data[0]
    pontuation = data[1]
    if not date.date():
      print ('não e data')