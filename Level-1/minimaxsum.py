def minimaxsum(x):
    x.sort()
    maxy = x[1:]
    miny = x[:-1]
    a = 0
    b = 0
    for i in maxy:
        a += i
    for i in miny:
        b += i
    
    print(a, b)
    

if __name__ == "__main__":
    minimaxsum([1,2,3,4,5])