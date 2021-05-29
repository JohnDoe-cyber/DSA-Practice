
## Have to mind the condition is valid also if two smallest are equal.


def findsmallest(x):
    min = int(x[0])
    for i in range(len(x)):
        if int(x[i])<=min:
            min = int(x[i])
            index = i
        else:
            pass
    return (min, index)

# findsmallest([31, 23, 12, 81, 76, 21])




# x = [31, 23, 12, 81, 76, 21]
# x.pop(2)
# print(x)





if __name__ == "__main__":
    # t = int(input())
    # n = int(input())
    
    kk = list(map(str, input().split(',')))

    min1, index = findsmallest(kk)
    # print(min1, index)
    kk.pop(index)

    min2, index2 = findsmallest(kk)

    sum = min1 + min2
    print(sum)



    