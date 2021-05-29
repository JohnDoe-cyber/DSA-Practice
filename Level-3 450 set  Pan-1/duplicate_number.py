

def findDuplicate(nums) -> int:
    d = {}
    
    for num in nums:
        if num in d:
            d[num] += 1
        elif num not in d:
            d[num] = 1 
        print(nums, num, d)       

    for key in d:
        if d[key] > 1:
            return key
        print(d)

print(findDuplicate([1,3,4,2,2]))