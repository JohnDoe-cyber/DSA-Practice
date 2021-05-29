# def resolve()




if __name__=='__main__':
    x = list(map(int, input().split()))
    n, m, a = x[0], x[1], x[2]

    total_squre_n = n//a + 1
    total_squre_m = m//a + 1

    total_squre = total_squre_m*total_squre_n
    print(total_squre)
