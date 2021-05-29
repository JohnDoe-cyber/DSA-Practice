x = [1, 2, 6, 23, 42, 190, 239, 411]


# def binary_search(data, target):
#     low=0
#     high=len(data)
#     # print(high)
#     if low > high:
#         return False
#     else:
#         mid = (high+low)//2
#         print(mid)
#         if data[mid]==target:
#             print(mid)
#             # return ("Found at {} index.".format(mid))
#         elif data[mid]>target:
#             high = mid-1
#             data = data[:high+1]
#             print(data)
#             return binary_search(data, target)
#         else:
#             low = mid + 1
#             data = data[low:]
#             print(data)
#             return binary_search(data, target)


# print(binary_search(x, 2))









def binary_search2(data, target, low, high):
    """ Runs at O(log(n)) """
    if low > high:
        return False
    else:
        mid = (high+low)//2
        # print(mid)
        if data[mid]==target:
            # print(mid)
            return ("Found at {} index.".format(mid))
        elif data[mid]>target:
            return binary_search2(data, target, low, mid-1)
        else:
            return binary_search2(data, target, mid + 1, high)


print(binary_search2(x, 190, 0 , len(x)))

            