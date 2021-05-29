[1,2,3,4],
[5,6,7,8],
[10,11,12,13]
[14, 15, 16, 17]


def spirallyTraverse(matrix, r, c): 
    arr = []
    row_start = 0
    row_end = r
    column_start = 0
    column_end = c
    

    while column_start<column_end and row_start <row_end:
        # print((row_start, row_end), (column_start, column_end))

        for i in range(column_start, column_end, 1):
            arr.append(matrix[row_start][i])

        # column_end -= 1
        row_start += 1

        if column_start<column_end and row_start <row_end:
            for i in range(row_start, row_end, 1):
                arr.append(matrix[i][column_end-1])

            column_end -= 1

        if column_start<column_end and row_start <row_end:
            for i in range(column_end-1, column_start-1, -1):
                arr.append(matrix[row_end-1][i])

        # column_start += 1
        row_end -= 1

        if column_start<column_end and row_start <row_end:
            for i in range(row_end-1, row_start-1, -1):
                arr.append(matrix[i][column_start])

        # row_start += 1
        column_start += 1
        # row_end -= 1
        # column_end -= 1

        # print("hello")

    # print(arr)
    return arr







if __name__ == '__main__':
    # spirallyTraverse([[1,2,3,4]], 1, 4)
    # spirallyTraverse([[1,2,3,4], [5,6,7,8]], 2, 4)
    # spirallyTraverse([[1,2,3], [4,5,6]], 2, 3)
    spirallyTraverse([[1,2,3,4], [5,6,7,8], [10,11,12,13]], 3, 4)
    spirallyTraverse([[1,2,3,4], [5,6,7,8], [10,11,12,13], [14, 15, 16, 17]], 4, 4)

    # for i in range(len(something)):
    #     print(something[i])