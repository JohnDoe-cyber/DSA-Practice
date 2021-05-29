


def majority(arr,size):
    dicty = {}
    for i in range(size):
        if arr[i] in dicty:
            dicty[arr[i]] += 1
        else:
            # dicty[arr[i]] = 1
            pass

    found = 0
    element = ''
    for i in dicty:
        if dicty[i] > size / 2:
            found = 1  
            element = i
            break

    if (found==0):
        return ("No majority element")
    else:
        return element 



        
