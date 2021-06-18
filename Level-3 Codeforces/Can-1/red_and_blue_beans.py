


def CheckValid(x):
    possible = 'YES'
    minimum_among = min(x[0], x[1])

    main_array = []
    for i in range(minimum_among):
        main_array.append([1,1])

    # print(main_array)

    difference_between = abs(x[0]-x[1])
    while difference_between>0:
        for i in range(minimum_among):
            # if difference_between > 0:
            if abs(main_array[i][0] - main_array[i][1]) < x[2]:
                main_array[i][1] += 1
                difference_between -= 1
            else:
                possible = "NO"
                difference_between = 0
                break
        

            # print(main_array)

    return possible






if __name__ == '__main__':
    n = int(input())
    for ii in range(n):
        x = list(map(int, input().split()))
        print(CheckValid(x))
        