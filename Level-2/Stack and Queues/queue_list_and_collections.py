## From list

x = []
x.insert(0,12)
x.insert(0,13)
x.insert(0,14)
x.insert(0,15)
print(x)

x.pop()
print(x)


## From collections.deque
from collections import deque

Queue = deque()

Queue.appendleft(12)
Queue.appendleft(32)
Queue.appendleft(132)
Queue.appendleft(112)
Queue.appendleft(512)

print(Queue)

Queue.pop()
print(Queue)

Queue.popleft()
print(Queue)
