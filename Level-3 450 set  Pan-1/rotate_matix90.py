
def print2D(arr):
    for i in range(len(arr)):
        for j in range(len(arr)):
            print(arr[i][j], end=' ')
        print('')

def rotate_matrix_print(arr):
    for i in range(len(arr)):
        for j in range(len(arr)-1, -1, -1):
            print(arr[j][i], end=' ')
        print('')



def rotate_matrix(arr):
    n = len(arr)
    for i in range(n):
        for j in range(i, n-i-1):
            temp = arr[i][j]
            arr[i][j]= arr[n-j-1][i]
            arr[n-j-1][i] = arr[n-i-1][n-j-1]
            arr[n-i-1][n-j-1] = arr[j][n-i-1]
            arr[j][n-i-1] = temp
        print2D(arr)
        print("")
    return arr


A = [
        [1, 2, 3, 4],
        [5, 6, 7, 8],
        [9, 10, 11, 12],
        [13, 14, 15, 16]
    ]

## Just print
rotate_matrix_print(A)
print('\n\n')

## rotate and then print
xx = rotate_matrix(A)
print2D(xx)