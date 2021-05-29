

def swap(x, y):
    temp = x
    x = y
    y = temp
    return x, y

def sort012(arr, n):    
    left = 0 
    right = n-1
    while (left <= right):
        if arr[left] == 0:
            left += 1 
            print(arr)
            # pass 
        elif arr[right] == 2:
            right -= 1 
            print(arr)
            # pass
        else:
            # if arr[left] == arr[right]:
            #     left += 1 
            #     right -= 1 
                # pass
            if arr[left] == 1 and  arr[right] == 0:
                arr[left], arr[right] = swap(arr[left], arr[right])
                left += 1 
                right -= 1 
            elif arr[left] == 2 and  arr[right] == 0:
                arr[left], arr[right] = swap(arr[left], arr[right])
                left += 1 
                right -= 1 
            elif arr[left] == 2 and  arr[right] == 1:
                arr[left], arr[right] = swap(arr[left], arr[right])
                left += 1 
                right -= 1 
            else:
                left += 1 
                right -= 1 
                pass
            print(arr)

    print("oh", arr)
    return arr




        # arr[i], arr[n-1] = swap(arr[i], arr[n-i]) 



# def sort012(arr, n):  
#     zero_arr = []  
#     one_arr = []
#     two_arr = []
#     for i in arr:
#         if i==0:
#             zero_arr.append(0)
#         elif i==1:
#             one_arr.append(1)
#         else:
#             two_arr.append(2)
#     final_arr = zero_arr + one_arr + two_arr
#     return final_arr
        



if __name__ == '__main__':
    heheehhe = list(map(int, "2 0 2 0 0 1 2 2 2 1 1 0 1 1 1 2 0 1 2 1 0 1 2 0 0 0 2 0 1 0 0 0 1 2 1 1 1 2 1 2 1 2 2 1 1 2 0 2 0 0 1 2 1 2 1 1 2 1 2 0 0 1 0 2 1 1 2 0 2 0 1 2 2 2 2 1 0 1 2 2 0 1 1 1 0 1 2 0 0 2 1 0 0 2 2 1 0 0 0 2 1 0 2 1 0 0 2 0 2 1 2 1 1 1 2 1 1 2 0 1 0 0 2 0 1 2 0 0 2 1 0 0 2 0 2 2 0 2 2 2 0 1 0 2 1 1 0 1 2 1 0 0 2 0 1 0 1 1 2 2 0 1 0 0 0 2 1 0 1 0 2 1 1 1 0 2 2 2 1 0 1 0 1 0 0 0 1 1 0 0 2 0 1 0 1 0 2 2 0 1 0 1 1 2 0 1 2 0 2 2 1 0 2 2 1 1 1 1 1 2 1 1 1 1 1 1 1 0 2 0 2 0 1 0 0 0 2 0 1 2 2 1 0 0 2 0".split(' ')))
    # heheehhe = list(map(int, "0 2 1 2 0".split(' ')))
    print(sort012(heheehhe, len(heheehhe)))
    heheehhe = sort012(heheehhe, len(heheehhe))
    heheehhe = sort012(heheehhe, len(heheehhe))
    heheehhe = sort012(heheehhe, len(heheehhe))
    print(heheehhe)


