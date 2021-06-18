

# def check(nums):
#     return_stq = False
#     check_yes = []

#     # if nums[0]<=nums[1]:
#     #     check_yes.append(1)
#     # else:
#     #     check_yes.append(0)

#     # print(check_yes)


#     for i in range(1,len(nums)):
#         if nums[i-1] <= nums[i]:
#             check_yes.append(1)
#         else:
#             check_yes.append(0)
    
#     # print(check_yes)


#     if nums[-2]<=nums[-1]:
#         check_yes.append(1)
#     else:
#         check_yes.append(0)

#     # print(check_yes)

#     check_yes = sum(check_yes)
#     if check_yes == len(nums)-1:
#         return_stq = True
#     return return_stq
        
#     print(check_yes)

print(check([4,2,3,5,6,7]))
print(check([3,4,2,3]))
print(check([4,2,1]))
print(check([4,2,3]))
print(check([4,5,6,7,8,100]))
print(check([-1,4,2,3]))

