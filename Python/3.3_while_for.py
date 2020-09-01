#!/usr/bin/env python

str1="hello world"
i=0

print "\n=====while========"
while i<len(str1):
		print str1[i]
		i = i + 1

print "\n=====for========"
for ch in str1:
	print ch

print "\n"
result=0
for i in range(10):
	result += i
print "1+..9=",result

print "\n"
list1=["aaa", 1, 2.11]
for ch in list1:
	print ch

print "\n"
dict1={1:"aaaa", 2:"bbbb", 3:"cccc"}
for ch in dict1:
	print ch
for ch in dict1.items():
	print ch


print "\n====while for else========="
while i<len(str1):
	i = i + 1
else:
	print "end of while"	

for ch in str1:
	pass	
else:
	print "end of for"


print "\n====break continue========="
for ch in "abcdefg":
	if ch=='d':
		print "continue"
		continue
	print ch
	if ch=='f':
		print "break"
		break

print "\n=========bubble============"
list1=[2,9,3,1,7,6,5,4,8]
print list1
i=0
j=0
temp=0
print "bubble sort:"
for i in range(len(list1)):
	for j in range(len(list1)-i-1):
		if list1[j] > list1[j+1]:
			temp = list1[j]
			list1[j] = list1[j+1]
			list1[j+1] = temp
print list1
