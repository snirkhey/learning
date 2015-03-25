#!/usr/bin/env python

#empty print statments are to insert newlines

x="Saurabh Nirkhey"
print

#printing character using %s just like c's printf()
print "String stored inside x is '%s'" %(x)


#printing character using string concatenation
print "First character of the string is ",x[0]

print


#printing character using %c just like c's printf()
print "First character of the string is '%c'" % (x[0])

print

#printing a character from end
print "Last character of string is '%c'" % (x[-1])
print


#creating a substring
print "If we start from character 8 and go till 14 we get '%s'" %( x[8:14])
print

#creating a substring without specifying end
print "If we start from character 7 and go till end we get '%s'" %( x[9:])
print


#split the string in pieces and store them
print "Lets try to split the string using space"
print

tokens=x.split()

print "string '%s' has been converted to a list(array of strings)->'%s'" %( x,tokens)
print

#string.startswith
print "Lets see if the string in x starts with 'S' x.startswith('S')->",x.startswith('S')
print

#string.endswith
print "Lets see if the string in x ends with 'S' x.endswith('S')->",x.endswith('S')
print
