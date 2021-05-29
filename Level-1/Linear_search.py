def search(arr, n, x): 
    for i in range(n): 
        if arr[i] == x: 
            return i 
    return -1
  
# Driver Code 
arr = [1, 10, 30, 15] 
x = 30
n = len(arr) 
print(x, "is present at index", 
             search(arr, n, x)) 