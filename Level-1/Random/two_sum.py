
aa = [12, 23, 2, 3, 9, 11, 0]
t1 = 35
t2 = 5

# t = t2
t = 14

dic = {}

## This takes linear time to search and get the numbers.
for i, num in enumerate(aa):
    print(i, num)
    lefto = t - num
    if lefto not in dic:
        dic[num] = i
    else:
        print([dic[lefto], i])
print(dic)