## O(3) time complexity 😅


def sum_arr(X, sum_size):
    summy = []
    for j in range(len(X) - sum_size + 1):
        summy.append(sum(X[j:j+sum_size]))

    return summy



## Contiguous sub-array with maximum sum
def maxSubArraySum(a, size):
    sum_array = []
    for i in range(1, len(a)+1):
        lala = sum_arr(a, i)
        sum_array += lala

    return max(sum_array)








if __name__ == '__main__':
    print(maxSubArraySum([1,2,3,-2,5], 5))
    print(maxSubArraySum([-1,-2,-3,-4], 4))
