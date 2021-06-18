

def search(arr, n, x, k):
    i = 0
    while (i < n):
        if (arr[i] == x):
            return i
        # i = i + max(1, int(abs(arr[i] - x) / k))
        i+=1
        print("i-> ", i)
    print("number is not present!")
    return -1







print(search([2, 4, 5, 7, 7, 6], 6, 6, 2))
print(search([4, 5, 6, 7, 6], 5, 6, 1))
