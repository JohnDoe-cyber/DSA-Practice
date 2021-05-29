
def insertionSort(arr):
    for i in range(1, len(arr)):
        print("i-", i)
        print("arr[i]- ", arr[i])
        key = arr[i]

        j = i-1
        while j >= 0 and key < arr[j] :
            print("j-",j)
            print(arr[j])
            arr[j + 1] = arr[j]
            j -= 1
            print(arr)
        arr[j + 1] = key
        print(arr)
        print("")

arr = [12, 11, 13, 5, 6, 9]
print(arr)
insertionSort(arr)
# for i in range(len(arr)):
#     print ("% d" % arr[i])