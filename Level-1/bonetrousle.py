from itertools import combinations

def bonetrousle(n, k, b):
    arr = [i for i in range(1,k)]

    list_1 = []

    try:
        if b == 2:
            for i, j in combinations(range(0, len(arr)), 2):
                if i+j+2 == n:
                    list_1.append([arr[i], arr[j]])
            return list_1[0]

        elif b == 3:    
            for i,j,k in combinations(range(0, len(arr)), 3):
                if i+j+k+3 == n:
                    list_1.append([arr[i], arr[j], arr[k]])
            return list_1[0]        

        
        elif b == 4:
            for i,j,k,l in combinations(range(0, len(arr)), 4):
                if i+j+k+l+4 == n:
                    list_1.append([arr[i], arr[j], arr[k], arr[l]])
            return list_1[0]
        
        elif b == 5:
            for i,j,k,l,m in combinations(range(0, len(arr)), 5):
                if i+j+k+l+m+5 == n:
                    list_1.append([arr[i], arr[j], arr[k], arr[l],arr[m]])
            return list_1[0]

        elif b == 6:
            for i,j,k,l,m,pp in combinations(range(0, len(arr)), 6):
                if i+j+k+l+m+pp+6 == n:
                    list_1.append([arr[i], arr[j], arr[k], arr[l],arr[m], arr[pp]])
            return list_1[0]


    except IndexError:
        return -1
        

print(bonetrousle(9, 10 ,2))