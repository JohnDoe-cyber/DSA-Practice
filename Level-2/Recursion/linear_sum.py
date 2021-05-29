def linear_sum__from_one(x):
    if x==0:
        return 0
    return x + linear_sum__from_one(x-1)

print(linear_sum__from_one(5))


print('___________')
print('')

def Linearsum_list(listy, n):
    if n == 0:
        return 0
    else:
        # print(Linearsum_list(listy, n-1) + listy[n-1])
        return Linearsum_list(listy, n-1) + listy[n-1]
    

print(Linearsum_list([4, 3, 6, 2, 8, 7, 5], 4))
