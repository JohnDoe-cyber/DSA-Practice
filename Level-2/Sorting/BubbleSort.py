
def swapfunction(x, y):
    temp = y
    y = x
    x = temp
    return x, y

def bubblesort(x):
    for i in range(len(x)-1):
        for i in range(len(x)-1):
            if x[i] > x[i+1]:
                x[i], x[i+1] = swapfunction(x[i], x[i+1])
                print(x)
            else:
                print(x)
        print("\n", x, "\n")
    print("\n", x)


bubblesort([5, 1, 4, 2, 8])



