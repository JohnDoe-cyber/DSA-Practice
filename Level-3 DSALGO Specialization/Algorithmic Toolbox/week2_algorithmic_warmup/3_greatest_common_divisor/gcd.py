# Uses python3
import sys

# def gcd_naive(a, b):
#     current_gcd = 1
#     for d in range(2, min(a, b) + 1):
#         if a % d == 0 and b % d == 0:
#             if d > current_gcd:
#                 current_gcd = d

#     return current_gcd


def gcd_new(a, b):
    # print(a, b)
    if a==0 or b==0:
        return 1
    else:
        a, b = max(a,b), min(a,b)
        # print("A and B", a, b)
        # while something==True:
        rem = a%b

        while rem != 0:
            # print("Inside the loop")
            a = b
            b = rem
            # print("hey",a, b)
            rem = a%b

        return b



if __name__ == "__main__":
    # input = sys.stdin.read()
    a, b = map(int, input().split())
    print(gcd_new(a, b))

    # print(min(12, 24))