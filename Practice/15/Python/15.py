
import random
i = 0
print("Загаднно число от 1 до 100")
m = random.randint(1, 100)
while i < 6:
    n = int(input("Введите ваш вариант:"))
    i += 1
    if n < m:
        print("Ваше число меньше загаданного")
        w = int(input("Введите 1, чтобы продолжить:"))
        if w == 1:
            continue
        else:
            break
    if n > m:
        print("Ваше число больше загаданного")
        w = int(input("Введите 1, чтобы продолжить:"))
        if w == 1:
            continue
        else:
            break
    if n == m:
        break
if n == m:
    i = str(i)
    print("Поздравляем,вы угадали число!")
    print(i)
if n != m:
    m = str(m)
    print("Вы проиграли,загаданным числом было", m)
