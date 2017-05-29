#!/usr/bin/python
# -*- coding: utf-8 -*-
from datetime import datetime


countI = 0
dateBegin = ''

def getCases():
  while():
    data = raw_input()
    print "_"+data
    data = data.split()
    date = data[0]
    pontuation = data[1]

    print "Data " + date
    print "Pontuação " + pontuation +'\n'

  return



numCasos = int(input())

while(countI < numCasos):
  current = int(countI + 1)
  print "Case %d" % current

  dateBegin = raw_input()
  date_obj = datetime.strptime(dateBegin,'%Y%m%d')
  print "Date Begin "
  print date_obj.strftime("%Y-%m-%d")

  getCases(date_obj)
  countI += 1

print "fim"