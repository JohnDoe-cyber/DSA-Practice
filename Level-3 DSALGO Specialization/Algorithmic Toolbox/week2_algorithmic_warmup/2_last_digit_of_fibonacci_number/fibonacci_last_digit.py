# Uses python3
import sys

# def get_fibonacci_last_digit_naive(n):
#     if n <= 1:
#         return n

#     previous = 0
#     current  = 1

#     for _ in range(n - 1):
#         previous, current = current, previous + current

#     return current % 10


def get_fibonacci_last_digit_naive(n):
    if n==0 or n==1:
        return n
    x = [0,1]
    for i in range(2, n+1):
        x.append(x[-1]%10+x[-2]%10)
    # print(x)
    # print(x[-1]%10)
    
    return x[-1]%10



if __name__ == '__main__':
    # input = sys.stdin.read()
    n = int(input())
    print(get_fibonacci_last_digit_naive(n))
