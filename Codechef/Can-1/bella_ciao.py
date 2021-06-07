






# 1≤T≤105
# 1≤d≤D≤106
# 1≤P,Q≤106


def func(D, d, P, Q):
    if (1<=D<=10**6 and 1<=d<=D) and (1<=Q<=10**6 and 1<=P<=Q) and (d<=D<=100):
        soe = D//d
        sum = 0
        Q_metric = 0
        for i in range(D):
            sum += P
            if i%d == 0 and i>0:
                Q_metric += Q
                # print("yes")
            sum += Q_metric
            # print(sum)

        print(sum)



# func(2,1,1,1)
# func(3,2,1,1)
# func(5,2,1,2)


if __name__ == '__main__':
    n = int(input())
    for i in range(n):    
        some = list(map(int, input().split()))
        func(some[0], some[1], some[2], some[3])
