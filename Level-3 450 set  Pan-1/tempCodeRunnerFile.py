nge(i, n-i-1):
        temp = arr[i][j]
        arr[i][j]= arr[n-j-1][i]
        arr[n-j-1][i] = arr[n-i-1][n-j-1]
        arr[n-i-1][n-j-1] = arr[j][n-i-1]
        arr[j][n-i-1] = temp
    print2D(arr)
    print("")