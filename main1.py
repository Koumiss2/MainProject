import random

a = random.randint(1, 50)


def Fib(n):
    if n <= 2:
        return 1
    else:
        return Fib(n - 1) + Fib(n - 2)


print(Fib(a), endl="")
