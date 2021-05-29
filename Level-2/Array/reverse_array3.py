def leftRotate(arr, n, d):
    if d == 0:
        return arr
    else:
        a1 = arr[0:d]
        a2 = arr[d:n]
        print(a1, a2)
        
        listy1 = []
        for i in range(len(a1)-1, -1, -1):
            listy1.append(a1[i])
            print(listy1)
            
        listy2 = []
        for i in range(len(a2)-1, -1, -1):
            listy2.append(a2[i])
            print(listy2)
        
        listy = listy1+listy2
        sof = []
        for i in range(len(listy)-1, -1, -1):
            sof.append(listy[i])
            
        return sof
            


print(leftRotate([1,2,3,4,5], 5, 2))