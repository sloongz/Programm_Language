#!/usr/bin/env python

str = "12345678abcdef"

print str[3]
print str[2:10:2] #sname[start:end:step]

#list
print "\n================list================"
list1=[1,2,3,4,5, "hello", 2.3]
print list1
print list1[2:4:1]
del list1

list2=[1,2,3]
list3=["one", "two", "three"]
list4=list2+list3
print list4
list4.append("add1")
print list4
list4.extend("add2")
print list4
list4.extend(["add3"])
print list4
list4.insert(0,"insert")
print list4

del list4[2]
print list4
del list4[2:3]
print list4

aa= list4.pop(2)
print aa
print list4
aa=list4.pop()
print list4

list4.remove("three")
print list4


list5=[1,2,3,4,5,6,7,8,9,'a']
print list5
list5[0] = 10
list5[-1] = 20
print list5
list5[1:3] = ["aa", "bb"]
print list5

aa=list5.count(5)
print aa
if list5.count(5):
	print "index:",list5.index(5)
else:
	print "not appear"

#tuple
print "\n================tuple================"
tuple1=("aa", "bb", "cc", "dd")
tuple2="ee","ff","gg","hh"
print tuple1
print tuple2
tuple3=tuple(list5)
print tuple3
print tuple3[2]
print tuple3[2:4:1]
del tuple3

#dict
print "\n================dict================"
list6=[["one",1],["two",2],["three",3],["four",4]]
dict1=dict(list6)
print dict1
print "key one vaule ",dict1["one"]
print dict1.get("one")
print dict1.get("five","not appear")

dict1["five"]=5
print dict1
dict1["one"]="first"
print dict1
del dict1["five"]
print dict1
print "keys:",dict1.keys()
print "values:",dict1.values()
print "items:",dict1.items()

#set
print "\n================set================"
set1= {1,2,3,'a','d'}
print set1
set1=set([1,2,3,4,5])
print set1
set1.add(8)
set1.add((7,8))
print set1
set1.remove(1)
print set1
set2 = {1,2,3}
print set1&set2
print set1|set2
print set1-set2
print set1^set2
