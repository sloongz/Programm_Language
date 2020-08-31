#!/usr/bin/python

print "hello python\n"

#type
n=78
print "n=%d" %(n)
print "type:"
print type(n)
print "\n"

#bool
print "bool:"
print(1>2)
print(1<2)
print "\n"


#print
import math
user_name='Charlie'
user_age=8
print "name:",user_name,"age:",user_age
nHex=0x20
print 'nHex=0x%x, nDec=%d, nOct=0O%o' %(nHex, nHex, nHex)
print bin(nHex)
print 'PI=%f' %math.pi
# width = 10, precise = 3, align = right
print 'PI=%-10.3f ###' %math.pi
# width = 10, precise = 3, align = left
print 'PI=%10.3f ###' %math.pi
print '%s' %user_name
str1 = "Oct: \061\062\063"
str2 = "Hex: \x31\x32\x33\x78\x79\x7A"
print str1
print str2
print "\n"


#operator
m=10.0
n=3.0
sum1=m+n
print "%d+%d=%d" %(m, n, sum1)
print "%d-%d=%d" %(m,n,m-n)
print "%d*%d=%d" %(m,n,m*n)
print "%f/%f=%f" %(m,n,m/n)
print "%f %% %f = %f" %(m,n, m%n)
str1=" hello"
print "m value is number "+str(m)+str1
print "1&3=0x%x" %(1&3)  
print "1|3=0x%x" %(1|3)  
print "1^3=0x%x" %(1^3)  
print "~1=%x" %(~1)
print "1<<2= 0x%x" %(1<<2)
print "2>>1= 0x%x" %(2>>1)
print "\n"


#and or not
if 1 and 0 :
	print "1 and 0 true"
else :
	print "1 and 0 false"

if 1 or 0 :
	print "1 or 0 true"
else :
	print "1 or 0 false"

print "not 1: %d" %(not 1)
print "\n"

#input
num1=input("enter a number:");
print "type:", type(num1)
num2=input("enter another number:")
result=num1+num2
print num1,"+",num2,"=",result
