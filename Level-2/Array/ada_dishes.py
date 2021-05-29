def dishes(a, b):
    b.reverse()
    x = 0
    y = 0
    for i in range(a):
        if x <= y:
            x += b[i]
        else:
            y += b[i]
    print(max(x, y)) 


if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        m = int(input())
        t = list(map(int, input().split()))
        dishes(m, t)