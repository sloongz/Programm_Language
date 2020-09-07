#!/usr/bin/env python

try:
	1/0
except (ValueError, ArithmeticError):
	print "error"

try:
	1/0
except Exception as e:
	print e.args
	print str(e)
	print repr(e)

try:
	a = int(input("please input value:"))
	print 20/a
except:
	print "error"
else:
	print "else no error"
finally:
	print "run finally block code"
"""
try:
	print "try throw raise"
	raise
except RuntimeError as e:
	print "exception",repr(e)
"""
try:
	raise ValueError("must number")
except ValueError as e:
	print "error:",repr(e)
