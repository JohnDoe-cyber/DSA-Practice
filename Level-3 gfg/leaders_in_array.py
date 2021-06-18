

def leaders(A, N):
    rightmost = A[-1]
    someArray= [rightmost]
    for i in range(N-2, -1, -1):
        if A[i]>=rightmost:
            rightmost = A[i]
            someArray.append(rightmost)
        else:
            pass
    someArray.reverse()

    print(someArray)





leaders([16, 17, 4, 3, 5, 2], 6)