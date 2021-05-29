def swap_elements_array(arr, a, b):
    listy1 = arr[a-1:b]
    sof1 = arr[:a-1]
    sof2 = arr[b+1:]

    sof = sof1 + sof2

    print(sof, listy1)


swap_elements_array([1,2,3,4,5,6,7,8], 3,6)