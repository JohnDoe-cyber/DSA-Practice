# python3

def find_max(numbers, excepty=None):
    max_number = 0
    max_number_index = 0

    second_max_number = 0
    if excepty == None:
        for i in range(len(numbers)):
            if numbers[i] >= max_number:
                max_number = numbers[i]
                max_number_index = i

        return max_number, max_number_index

    elif excepty!=None:
        # print(excepty[1])
        for i in range(len(numbers)):
            # print(max_number)
            if numbers[i] >= second_max_number:
                if i == excepty[1]:
                    pass
                else:
                    second_max_number = numbers[i]


            else:
                pass

        return second_max_number

    else:
        pass


def max_pairwise_product(numbers):
    n = len(numbers)
    max_product = 0
    # for first in range(n):
    #     for second in range(first + 1, n):
    #         max_product = max(max_product,
    #             numbers[first] * numbers[second])

    first_num, first_num_index = find_max(numbers)
    # print(first_num, first_num_index)
    second_num = find_max(numbers, excepty=[first_num, first_num_index])
    # print(second_num)
    max_product = first_num * second_num
    
    
    
    return max_product


if __name__ == '__main__':
    input_n = int(input())
    input_numbers = [int(x) for x in input().split()]
    print(max_pairwise_product(input_numbers))
