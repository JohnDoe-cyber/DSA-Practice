


def findTwoElement(arr, n): 

    missing = 0
    repeatin = 0


    hashy = {}

    for i in range(len(arr)):
        if arr[i] in hashy:
            hashy[arr[i]] += 1
        else:
            hashy[arr[i]] = 1

    # print(hashy)

    # max_el = max(arr)
    for i in range(1, n+1):
        if i not in hashy:
            missing = i
        else:
            pass
    
    
    for i in hashy:
        if hashy[i] > 1:
            repeatin = i
        else:
            pass
    
    print([repeatin, missing])
    return [repeatin, missing]







if __name__ == '__main__':
    findTwoElement([1, 3, 3], 3)
