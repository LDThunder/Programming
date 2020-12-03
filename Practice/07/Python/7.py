ch = int(input('1 - длины сторон,2 - координаты вершин = '))
if ch == 1:
    a = float(input('a = '))
    b = float(input('b = '))
    c = float(input('c = '))
    p = (a + b + c) / 2
    s = (p * (p - a) * (p - b) * (p - c)) ** 0.5
    print('S = ', s)
elif ch == 2:
    x1, y1 = map(float, input('A = ').split())
    x2, y2 = map(float, input('B = ').split())
    x3, y3 = map(float, input('C = ').split())
    s = (1 / 2) * (abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)))
    print('S = ', s)
else:
    print('Неправильно набран номер')