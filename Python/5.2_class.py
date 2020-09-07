#!/usr/bin/env python

class ClassTest(object):
	__num=0

	@classmethod
	def addNum(cls):
		cls.__num += 1
	
	@classmethod
	def getNum(cls):
		return cls.__num
	
	def __new__(self):
		ClassTest.addNum()
		return super(ClassTest, self).__new__(self)

class Student(ClassTest):
	def __init_(self):
		self.name=''

a = Student()
b = Student()

print "student num:",ClassTest.getNum()

import time
class TimeTest(object):
	def __init__(self, hour, minute, second):
		self.hour = hour
		self.minute = minute
		self.second = second

	@staticmethod
	def showTime():
		return time.strftime("%H:%M:%S", time.localtime())

print TimeTest.showTime()
t=TimeTest(2,10,10)
newTime = t.showTime()
print newTime
