# 1 example - Lambda 
func = lambda: "Hello world"
print func()

# 2 example - First-class member
tab = {}
tab['+'] = lambda a, b: a-b
print "5-4 = %d" % tab['+'](5,4)

# 3 example - Foldr
vec = range(7)[1:]
redVec = reduce(lambda a, b: a*b, vec, 1)
print "6!=%d" % redVec

# 4 exmple - Filter
str2 = "foo\n\t bar\n\n"
filStr = filter(lambda x: not x[0].isspace(), list(str2))
print ''.join(filStr)

# 5 example map
vec = range(4)[1:]
mapVec = map(lambda x: str(x*x), vec)
print ' '.join(mapVec)
