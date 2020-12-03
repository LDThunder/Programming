h1, m1 = map(int, input('Время 1:').split(':'))
h2, m2 = map(int, input('Время 2:').split(':'))
if 0 <= h1 <= 23 and 0 <= h2 <= 23 and 0 <= m1 <= 59 and 0 <= m2 <= 59:
    r1 = h1 * 60 + m1
    r2 = h2 * 60 + m2
    if r1 > r2:
        w = r1 - r2
        if w > 15:
            print('Встерча не состоится')
        elif w == 15:
            print('Встреча состоиться')
        elif w < 15:
            print('Встреча состоиться')
    elif r1 < r2:
        w = r2 - r1
        if w > 15:
            print('Встерча не состоится')
        elif w == 15:
            print('Встреча состоиться')
        elif w < 15:
            print('Встреча состоиться')
else:
    print('Неверное время')

