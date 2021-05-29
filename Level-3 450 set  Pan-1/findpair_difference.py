
# def binary_search(data, target, low, high):
#     something = -1    
#     if low > high:
#         something = -1
#     else:
#         mid = (high+low)//2
#         # print(mid)
#         if data[mid]==target:
#             # print(mid)
#             something = 1
#         elif data[mid]>target:
#             return binary_search(data, target, low, mid-1)
#         else:
#             return binary_search(data, target, mid + 1, high)

#     return something

# def findPair(arr, L,N):
#     karma = -1
#     for i in range(L):
#         if binary_search(arr, arr[i] - N, 0, L-1) == 1 or binary_search(arr, arr[i] + N, 0, L-1)==1:
#             karma = 1
#             break
#         else:
#             karma = -1

#     print(karma)
#     return karma


## the gfg method

def findPair(arr, L, N):
    return_val = False
    arr.sort()
    print(arr)
    a = 0
    b = 1
    while a<L and b<L:
        if a!=b and arr[b] - arr[a] == N:
            return_val = True
            return True
            break
        elif arr[b] - arr[a] < N:
            b += 1
        else:
            a += 1

    return return_val







if __name__ == '__main__':
    print(findPair([5, 20, 3, 2, 5, 80], 6, 78))

