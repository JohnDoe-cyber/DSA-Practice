def rev(x):
    listy = []
    for i in range(len(x)-1, -1, -1):
        listy.append(x[i])
    stringy = ''
    for i in listy:
        stringy += i
    print(int(stringy))


if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        t = str(int(input()))
        rev(t)


