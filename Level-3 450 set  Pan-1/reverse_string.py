
S = "GeeksforGeeks"

arr =  list(map(str, S.strip()))
print(arr)
new_string = ''
for i in range(len(arr)):
    new_string += arr[len(arr)-1-i]
    
print(new_string)