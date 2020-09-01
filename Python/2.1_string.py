#!/usr/bin/env python
str1="God"
str2="good""luck"
print str1
print str2
print str1+str2
num=1
print str1+str(num)
print str1[0]
print str1[-1]
print str2[1:4:1]
print str2,"len:",len(str2)
str1="hello:world:wwww:xxxx"
print str1.split(':')
print str1.split(':',2)

list1=['www','baidu','com']
newstr='.'.join(list1)
print newstr

print newstr.count('.')
print newstr.find('www')
print newstr.index('www')

str1="www.baidu.com"
str2="www.google.com.hk"
print str1.ljust(20)
print str2.ljust(20,'-')
print str1.rjust(20, '*')
print str2.rjust(20)
print str1.center(20,'=')
print str2.center(20)
print str2.title()
print str2.lower()
print str2.upper()
