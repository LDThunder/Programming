s, l1, r1, l2, r2 = map(int, input('Введите значение через пробел:').split())
if ((-10 ** 15) <= (s and l1 and r1 and l2 and r2) <= (10 ** 15)) and (l1 <= (r1 and l2) <= r2):
