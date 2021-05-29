from collections import deque


## Implementation of basic push, pop, peek, isempty, size operation using collection's deque
class Stack:
    def __init__(self):
        self.abc = deque()
    def push(self, val):
        self.abc.append(val)
    def pop(self):
        return self.abc.pop()
    def peek(self):
        return self.abc[-1]
    def isempty(self):
        if len(self.abc)==0:
            return True
    def size(self):
        return len(self.abc)
    def seedeque(self):
        return self.abc

cc = Stack()
cc.push(5623)
cc.push(2312)
cc.push(232)
cc.push(123)

print(cc)
cc.push(81)
print(cc)

print(cc.peek())
cc.isempty()
cc.size()

print(cc.pop())
print(cc)

print(cc.seedeque())


