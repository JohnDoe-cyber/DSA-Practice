

def rowWithMax1s(arr, n, m):
    so_Arr = []
    for i in range(n):
        num_1 = 0
        for j in range(m):
            if arr[i][j] == 1:
                num_1 += 1
        so_Arr.append(num_1)

    print(so_Arr)





a = [[0, 1, 1, 1],
[0, 0, 1, 1],
[1, 1, 1, 1],
[0, 0, 0, 0]]
rowWithMax1s(a,4,4)