a = float(input('a = '))
b = float(input('b = '))
c = float(input('c = '))
d = (b * b) - (4 * a * c)
if a == 0:
    x = (-c) / b
    print('x =', x)
elif d > 0:
    x1 = (-b + d ** 0.5) / (2 * a)
    x2 = (-b - d ** 0.5) / (2 * a)
    print('x1 =', x1)
    print('x2 =', x2)
elif d == 0:
    x = (-b) / (2 * a)
    print("x =", x)
else:
    print('Нет корней')