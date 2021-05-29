import math
import os
import random
import re
import sys

#
# Complete the 'dynamicArray' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER n
#  2. 2D_INTEGER_ARRAY queries
#

def dynamicArray(n, queries):
    S = []
    last_answer = 0
    q = len(queries)
    print(n)
    print(queries)

    for i in range(n):
        S.append([])
    print(S)
    # print()
    for i in range(q):
        x = queries[i][1]
        y = queries[i][2]

        s1 = ((x^last_answer)%n)

        if q==1:
            S[s1].append(y)
        else:
            last_answer = S[s1][y%len(S[s1])]
            return (last_answer)

    
    

if __name__ == '__main__':


    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    q = int(first_multiple_input[1])

    queries = []

    for _ in range(q):
        queries.append(list(map(int, input().rstrip().split())))

    dynamicArray(n, queries)


