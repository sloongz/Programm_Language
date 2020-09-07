#!/usr/bin/env python

class Student:
	def __init__(self, name):
		self.__name = name
	def get_name(self):
		return self.__name
	def set_name(self, name):
		self.__name = name

a = Student('lilei')
print a.get_name()
a.set_name('xiaoming')
print a.get_name()

class StudentX:
	@property
	def name(self):
		 return self.__name
	@name.setter
	def name(self, name):
	  self.__name = name

b = StudentX()
b.name = "meimei"
print b.name


class People:
	def __init__(self):
		self.name = People
	def run(self):
		self.run = True
		print "I can run"
	def say(self):
		print "my name is:",self.name

class Teach(People):
	def run(self):
		self.run = False
		print "I can't run"
	pass

lilei=Teach();
lilei.name = "xxxx"
lilei.say()
lilei.run()

class Caaa:
	__slots__=('name','info','add')
def info(self):
	print "info"
aaa = Caaa()
aaa.info = info
aaa.info(Caaa)
