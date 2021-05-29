## NOt working!!!!!!!!

# def merge(arr, l, mid, r):
#     x1 = mid-l+1
#     x2 = r-mid

#     arr1, arr2 = [], []
#     for i in range(x1-1):
#         arr1.append(arr[i])
#     for i in range(x2):
#         arr2.append(arr[mid+i])

#     thevector = [0 for i in range(len(arr1)+ len(arr2))]
#     # print(thevector)
    





def mergesort(arr):
    l = 0
    r = len(arr)
    thevector = arr
    if len(arr)>1:
        mid = (l+r)//2

        arr1 = arr[:mid]
        arr2 = arr[mid:]
        
        mergesort(arr1)
        mergesort(arr2)

        i = 0
        j = 0
        k = 0


        while i<len(arr1) and  j<len(arr2):
            if (arr2[j] > arr1[i]):
                thevector[k] = arr1[i]
                i+=1
            else:
                thevector[k] = arr2[j]
                j+=1
            k+=1

        while (i<len(arr1)):
            thevector[k] = arr1[i]
            i+=1
            k+=1
        while (j<len(arr2)):
            thevector[k] = arr2[j]
            j+=1
            k+=1


        # print("thevector", thevector)
    return thevector

    # print("arr", arr)


if __name__ == '__main__':
    ssss = [56,2,34,28,3,22,43,23]
    ssss = mergesort(ssss)
    print(ssss)