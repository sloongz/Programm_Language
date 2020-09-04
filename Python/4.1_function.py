#!/usr/bin/env python

def max_value(val1, val2):
	if (val1 > val2):
		return val1
	else:
		return val2
		
print max_value(1,2)

def print_str(str1, str2="hello python"):
	print "str1:",str1
	print "str2:",str2

print_str("I am one", "I am two")
print_str("only one")

val1 = "hello outside"
def test_scope():
		global gval
		val1 = "hello inside"
		gval = "global"
		print "call func test_scope()"
		print "test_scope(), print locals():",locals()
test_scope()
print "val1:",val1
print "gval:",gval

print "print global():",globals()
print "\n"

print "print vars():",vars()
print "\n"

def outdef():
	print "out print"
	def indef():
		print "call indef function print"
	indef()
	def indef1():
		print "this is indef1 print"
	return indef1 #return a funtion
outdef()
print "\n"
newdef = outdef() #outdef() return inside funtion indef1() to newdef
newdef()
print "\n"

def nth_power(exponent):
	print "param: exponent:",exponent
	def exponent_of(base):
		print "param: base:",base
		return base ** exponent
	return exponent_of #return funtion exponent_of()
square = nth_power(2)
print square(2)
cube = nth_power(3)
print cube(2)

