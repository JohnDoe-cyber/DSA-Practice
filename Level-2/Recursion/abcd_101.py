def factoial(x):
    if x == 1 or x==0:             ## Base class
        return 1
    else:                                               ## Recursive case
        return x*factoial(x-1)


print(factoial(900))