# 3 example - Foldr
vec = range(7)[1:]
redVec = reduce(lambda a, b: a+b, vec, 0) 

# 4 exmple - Filter
str2 = "foo\n\t bar\n\n"
filStr = filter(lambda x: not x[0].isspace(), list(str2)) 

# 5 example map
vec = range(4)[1:]
mapVec = map(lambda x: str(x*x), vec) 