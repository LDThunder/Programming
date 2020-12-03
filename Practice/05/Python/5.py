x0 = float(input('x(0) = ')) # Лучше выбрать тип float,ибо данные могут быть дробными
v0 = float(input('v(0) = '))
t = float(input('t = '))
xt = (x0 + (v0 * t)) - ((9.8 * t * t) / 2) # Разници особой между вариантами нет
print(abs(xt - x0))
