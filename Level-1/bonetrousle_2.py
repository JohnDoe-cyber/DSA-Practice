from functools import reduce
from math import gcd

input()
a = map(int,input().strip().split())
b = map(int,input().strip().split())
lcm_a = reduce(lambda x,y: x*y//gcd(x,y), a)
gcd_b = reduce(gcd, b)
count = 0
for i in range(lcm_a, gcd_b + 1, lcm_a):
    if gcd_b%i==0:
        count+=1
print(count)