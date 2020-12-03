a = int(input('a = '))
b = int(input('b = '))
c = a
a = b
b = c
print(a, b)
a, b = b, a
print(a, b)