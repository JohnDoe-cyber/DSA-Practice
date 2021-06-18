def func(a, b, A, B):
    a_to = A//a
    b_to = B//b
    print(a_to + b_to)



if __name__ == '__main__':
    n = int(input())
    for i in range(n):    
        some = list(map(int, input().split()))
        func(some[0], some[1], some[2], some[3])

    func(150, 400, 1200, 1200)
    func(100, 450, 1000, 1350)

# 100<=a<=200 and 400<=b<=500 and 1000<=A<=1200 and 1000<=B<=1500: