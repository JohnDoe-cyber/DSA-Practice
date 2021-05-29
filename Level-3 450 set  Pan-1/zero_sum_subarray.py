
def findSubarray(arr):
    hashy = {}
    sum_to_find = 0
    res = 0
    sum_current = 0

    for i in range(len(arr)):
        # print(hashy)
        sum_current += arr[i]
        print("Sum current ", sum_current)
        # print("Sum to find", sum_to_find)
        if sum_current == sum_to_find:
            res += 1
        print("res", res)
        
        
        somt = sum_current - sum_to_find
        if somt in hashy:
            res += hashy[somt]
        if sum_current in hashy:
            hashy[sum_current] += 1
        else:
            hashy[sum_current] = 1
        print(hashy)

    print(res)



findSubarray([6,-1,-3,4,-2,2,4,6,-12,-7])
findSubarray([0,0,5,5,0,0])