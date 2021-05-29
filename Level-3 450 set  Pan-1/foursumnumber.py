

def fourSum(arr, kk):
    arr = sorted(arr)
    listy = []
    for i in range(len(arr)):
        for j in range(i, len(arr)):
            for k in range(j, len(arr)):
                for l in range(k, len(arr)):
                    if arr[i] + arr[j] + arr[k] + arr[l] == kk :
                        print([arr[i], arr[j], arr[k], arr[l]])
                        listy.append([arr[i], arr[j], arr[k], arr[l]])
                    else:
                        print("Fuke")
    print(listy)








if __name__ == '__main__':
    fourSum([0,0,2,1,1], 3)
    # fourSum([10,2,3,4,5,7,8], 23)
