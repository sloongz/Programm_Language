#!/usr/bin/env python

class student:
	m_name="student"
	m_age=10
	m_score=100
	def __init__(self, name, age, score):
		print "construct"
		self.m_name = name
		self.m_age = age
		self.m_score = score

	def show(self):
		local="local"
		print "name:",self.m_name
		print "age:",self.m_age
		print "score:",self.m_score
		print local
	@classmethod
	def info(cls):
		print "info"
	@staticmethod
	def info_s():
		print "info_s"

lilei=student("lilei", 10, 100)
lilei.show()
print "\n"

lilei.sex="man"
print lilei.sex
del lilei.sex
print "\n"

student.show(lilei)
print "\n"
student.info()
print "\n"
student.info_s()
print "\n"
