# Uses python3
import sys

# def lcm_naive(a, b):
#     for l in range(1, a*b + 1):
#         if l % a == 0 and l % b == 0:
#             return l

#     return a*b

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



if __name__ == '__main__':
    # input = sys.stdin.read()
    a, b = map(int, input().split())
    gcd = gcd_new(a, b)
    lcm = (a*b)/gcd
    print(int(lcm))
