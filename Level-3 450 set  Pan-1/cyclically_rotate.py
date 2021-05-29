
def rotate( arr, n):
    # x = arr[-1]
    # print(x)
    # arr = [x] + arr[:n-1]
    # print(arr)
    nakuma = []
    for i in range(n):
        nakuma.append(arr[i])
    # print(arr)
    arr[0] = nakuma[-1]
    # print(arr)
    # print("nakuma",nakuma)

    for i in range(1, n):
        arr[i] = nakuma[i-1]
    # print(arr)
    

if __name__ == '__main__':
    a = [1, 2, 3, 4, 5]
    rotate(a, 5)
    print(*a)        ## Notice this way of printing.