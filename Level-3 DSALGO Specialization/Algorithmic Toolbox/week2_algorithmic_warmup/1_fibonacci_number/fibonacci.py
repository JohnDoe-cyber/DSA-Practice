# Uses python3
# def calc_fib(n):   ## This uses recursion
#     if (n <= 1):
#         return n

#     return calc_fib(n - 1) + calc_fib(n - 2)


def calc_fib(n):
    x = [0,1]
    for i in range(2, n+1):
        x.append(x[-1]+x[-2])
    if n==0:
        return 0
    return x[-1]



n = int(input())
print(calc_fib(n))
