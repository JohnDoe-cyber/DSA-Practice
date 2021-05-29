def BubSort(x):
    kount = 0
    for i in range(len(x)-1):
        for j in range(len(x)-1):
            if x[j] <= x[j+1]:
                pass
            elif x[j] > x[j+1]:
                a = x[j]
                x[j] = x[j+1]
                x[j+1] = a
                kount += 1
            else:
                pass
    print('Array is sorted in ' +  str(kount) + ' swaps.')
    print("First Element: "+ str(x[0]))
    print("Last Element: "+ str(x[-1]))







if __name__ == "__main__":
    n = int(input().strip())
    a = list(map(int, input().strip().split(' ')))
    BubSort(a)