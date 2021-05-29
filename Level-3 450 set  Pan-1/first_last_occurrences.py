

def find(arr, n, x):
    low = 0
    high = n

    lower = 0
    higher = 0
    while low<=high:
        mid = (low+high)//2
        if arr[mid] >= x:
            high = mid -1
            lower = mid
            print("left", mid, arr[mid])
        elif arr[mid] < x:
            low = mid + 1
            print("right", mid, arr[mid])
        else:
            return -1

    low = 0
    high = n

    while low<=high:
        mid = (low+high)//2
        if arr[mid] > x:
            high = mid -1
            print("left", mid, arr[mid])
        elif arr[mid] <= x:
            low = mid + 1
            higher = mid
            print("right", mid, arr[mid])
        else:
            return -1

    return lower, higher


if __name__ == '__main__':
    arr = [1, 3, 5, 5, 5, 5, 67, 123, 125]
    print(find(arr, 9, 5))
    
    arr = [1, 3, 5, 5, 5, 5, 7, 123, 125]
    print(find(arr, 9, 7))
    
    arr = list(map(int, "1 1 1 2 3 3 3 4 4 4 4 4 5 5 6 7 7 7 8 8 8 8 9 9 9 9 9 10 10 10".split()))
    print(find(arr, 30, 8))
    

    arr = list(map(int, "1 1 2 2 2 3 3 3 4 4 5 5 5 5 5 5 6 6 7 7 9 9 9".split()))
    print(find(arr, 23, 2))