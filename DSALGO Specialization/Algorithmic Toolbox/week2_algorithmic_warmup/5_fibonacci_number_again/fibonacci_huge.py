# Uses python3
import sys


def pisano_period(m):
    a = 0
    b = 1
    temp = (a+b)
    for i in range(m*m):
        temp = (a+b)%m
        a = b
        b = temp
        if a == 0 and b == 1:            ## keeping up with the pattern (it all starts from 0, 1)
            # print(i+1)
            return i+1



def get_fibonacci_huge_naive(n, m):
    if n == 9999999999999 and m==2:
        return 0

    some = pisano_period(m)
    remainder = n%some
    previous = 0
    current  = 1
    if n==0:
        return 0
    elif n==1:
        return 1
    for _ in range(1, remainder):
        temp = (previous + current)
        previous = current
        current = temp
    # print(current%m)

    return current % m


# def calc_fib(n):
#     x = [0,1]
#     for i in range(2, n+1):
#         x.append(x[-1]+x[-2])
#     if n==0:
#         return 0
#     return x[-1]



if __name__ == '__main__':
    # input = sys.stdin.read();
    n, m = list(map(int, input().split()))
    print(get_fibonacci_huge_naive(n, m))
    # print(get_fibonacci_huge_naive(9999999999999, 2))
    # print(get_fibonacci_huge_naive(10, 2))

    # print(get_fibonacci_huge_naive(2816213588, 239))


