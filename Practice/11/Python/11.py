a, b = float(input()), int(input())


def power(a, n):
    q, w, r, arr = 0, 1, 0, []
    if n > 1:
        while w < b:
            if b == 2:
                arr.append(a * a)
                r += arr[q]
            else:
                if w < 2:
                    arr.append(a * a)
                    r += arr[q]
                else:
                    arr.append(a)
                    r *= arr[q]
            w += 1
            q += 1
    else:
        r += a
    return r


print(power(a, b))
