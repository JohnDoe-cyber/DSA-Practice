
## From gfg website

def reverseArray(arr, start, end):
    while (start< end):
        rando = arr[start]
        arr[start] = arr[end]
        arr[end] = rando
        start += 1
        end -= 1 


def leftRotate(arr, d):
    if d == 0:
        return arr
    n = len(arr)

    d = d%n
    reverseArray(arr, 0, d-1)
    reverseArray(arr, d, n-1)
    reverseArray(arr, 0, n-1)



def printArray(arr):
    for i in range(len(arr)):
        print( arr[i])

    

        

