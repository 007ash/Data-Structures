x = [0]*3
print(x)
x[0] = [1]
print(x)
x[1] = x[0]
print(x)
x[0][0] = 99
print(x)