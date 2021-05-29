def Twod_hourglass(x):
    last_my = []
    for i in range(len(x)-2):
        for j in range(len(x)-2):
            kk = 0
            kk += sum(x[i][j:j+3])
            kk += sum(x[i+1][j+1:j+2])
            kk += sum(x[i+2][j:j+3])
            last_my.append(kk)
    return last_my








if __name__ == '__main__':
    arr = [[1, 1, 1, 0, 0, 0], [0, 1, 0, 0, 0, 0], [1, 1, 1, 0, 0, 0], [0, 0, 2, 4, 4, 0], [0, 0, 0, 2, 0, 0], [0, 0, 1, 2, 4, 0]]
    print(Twod_hourglass(arr))




    # kk = [1,1,1]
    # print(sum(kk))
    # print(len(arr))