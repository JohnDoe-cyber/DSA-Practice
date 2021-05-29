
def stringify(nums):
    stringy = ''
    for i in range(len(nums)):
        stringy += '{0}'.format(nums[i])
    return stringy


def nextPermutation(nums):
    '''modify nums'''
    stringy = stringify(nums)
    # print(stringy)

    temp1 = sorted(nums, reverse=True)
    stringy2 =  stringify(temp1)
    reverse_sort_integer = int(stringy2)
    # print(reverse_sort_integer)

    stringy_comparision = ''  
    # print(sorted(list(map(int , stringy_comparision))) != sorted(list(map(int , stringy))))
    # while sorted(list(map(int , stringy_comparision))) != sorted(list(map(int , stringy))):
    #     print("I'm running inside while")
    #     inty = int(stringy) + 1
    #     print("inty", inty)
    #     if inty > reverse_sort_integer:
    #         break
    #     else:    
    #         stringy_comparision = str(inty)
    #         print(list(map(int , stringy_comparision)))
    #         print(list(map(int , stringy)))
    #         print(sorted(list(map(int , stringy_comparision))) != sorted(list(map(int , stringy))))
    #         stringy = str(inty)

    xpedia = -1
    while xpedia != reverse_sort_integer:
        # print("I'm running inside while")
        inty = int(stringy) + 1
        # print("inty", inty)
        if inty > reverse_sort_integer:
            break
        else:    
            stringy_comparision = str(inty)
            # print(list(map(int , stringy_comparision)))
            # print(list(map(int , stringy)))
            xpedia = int(stringify(sorted(list(map(int , stringy_comparision)), reverse=True)))
            stringy = str(inty)

    # print("stringy", stringy)








    return stringy






if __name__ == '__main__':
    print(nextPermutation([1,2,3]))