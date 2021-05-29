

def excuseme(arr):
    listy = []
    listy.append(arr[0])
    i = 0
    # for i in range(1, len(arr)):
    for j in range(len(arr)):
        while i != len(arr):
            if arr[i][0] <= listy[j][1] and arr[i][0] !=  arr[i][1]:
                print("ins")
                listy[j][0] = min(listy[j][0], arr[i][0])
                listy[j][1] = max(listy[j][1], arr[i][1])
            else:
                print("ins2334")
                listy.append([arr[i][0], arr[i][1]])
            i += 1
            print(listy)
        print( " hey " ,listy)

    
        

    return listy


def merge(arr):
    something = excuseme(arr)
    something = excuseme(something)
    return something
    



if __name__ == '__main__':
    # print(merge([[1,3],[2,6],[8,10],[15,18]]))
    # print(merge([[1,4],[4,5]]))
    # print(merge([[1,4],[0,0]]))
    # print(merge([[1,4],[0,4]]))
    print(merge([[2,3],[4,5],[6,7],[8,9],[1,10]]))
    print(merge([[2,3],[5,5],[2,2],[3,4],[3,4]]))






