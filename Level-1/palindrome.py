import sys

class Solution:
    
    def __init__(self):
        self.queue1 = []
        self.stack1 = []

    def pushCharacter(self, x):
        self.stack1.append(x)
    def popCharacter(self):
        return self.stack1.pop(-1)
    def enqueueCharacter(self, x):
        self.queue1.append(x)
    def dequeueCharacter(self):
        return self.queue1.pop(0)









s=input()

obj=Solution()   

l=len(s)

for i in range(l):
    obj.pushCharacter(s[i])
    obj.enqueueCharacter(s[i])
    
isPalindrome=True

for i in range(l // 2):
    if obj.popCharacter()!=obj.dequeueCharacter():
        isPalindrome=False
        break

if isPalindrome:
    print("The word, "+s+", is a palindrome.")
else:
    print("The word, "+s+", is not a palindrome.")    