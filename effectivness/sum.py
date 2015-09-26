# 3 example - Foldr
# sum of the first 100 000 000 integers
vec = range(100000001)[1:]
redVec = reduce(lambda a, b: a+b, vec, 0)
print "sum(100000001)=%d" % redVec