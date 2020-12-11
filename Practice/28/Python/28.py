def print_factorization(n: int) -> None:
    for i in range(2, int(n + 1)):
        if (n % i == 0):
            k = 0
            j = 1
            while (n % i == 0):
                n = n / i
                k += 1
            if (k == 1):
                print(i, "*")
            else:
                print(i, "^", k, "*")
n = int(input())