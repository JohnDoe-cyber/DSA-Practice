from itertools import combinations


d =3
arr = [1, 2, 3, 4, 5, 6, 7, 8]
list1 = []


for i,j,k in combinations(range(0, len(arr)), 3):
    if i+j+k == 9:
        list1.append([arr[i], arr[j], arr[k]])


print(list1)