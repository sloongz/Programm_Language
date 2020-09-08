#!/usr/bin/env python

import os

print os.getcwd()

file1 = open("a.txt", mode='a+')
file1.write("write a line\n")
for line in file1.readlines():
	line = line.strip()
	print "read line: %s" %line
file1.close()

with open('a.txt', 'a') as f:
    f.write("\npython")
