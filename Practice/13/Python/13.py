import math
c = 0
i = 1
n = int(input())
if n < 1:
    print('Ч меньше 1')
elif n == 1:
    print("Простое")
m = int(math.sqrt(n))
if n > 1:
    while i <= m:
        if n % i == 0:
            c += 1
        elif c != 1:
            print("Это число не является простым")
        else:
            print("Простое")

        i += 1

