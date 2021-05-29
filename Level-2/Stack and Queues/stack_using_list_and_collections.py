
# Implementation of stack using List

staky = []
staky.append(2)
staky.append(4)
staky.append(6)
staky.append(12)
staky.append(623)
staky.append(161)


print(staky)

staky.pop()
print(staky)

print(staky.pop())
print(staky)



print(" ")
print("______________________________")
print(" ")


# ______________________________

# implementation of Stack using collections.deque

# collections.deque - A generalization of stack and queue
# [Implemented using doubly linked list as opposed to Arrays]

# print([x for x in range(20)])

from collections import deque

staky2 = deque()
print(dir(staky2))

staky2.append(23)
staky2.append('453')
print(staky2)

print(staky2.pop())
print(staky2)

staky2.appendleft(34)
print(staky2)
