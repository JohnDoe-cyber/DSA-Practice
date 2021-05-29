def cunty(x):
    listy = []
    for i in range(1, x//2+1):
        if x%i==0:
            listy.append(i)
    print(sum(listy) + x)

cunty(7)