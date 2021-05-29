
# Enqueue, Deque, Peek, Isfull, IsEmpty, PrintQueueFront, PrintQueueBack
class Queue:
    def __init__(self, capacity):
        self.arr = []
        self.front = -1
        self.back = -1
        self.capacity = capacity

    ## [a, b, c, d, e, f]
    def enqueue(self, x):
        if self.isFull():
            print("Queue is full while enquing")
        else:
            self.arr.insert(0, x)
            # print(self.arr)
            self.front += 1
            # self.back += 1
            
    def deque(self):
        if self.front == -1 or self.back>=self.front:
            print("The Queue is empty!")
        else:
            print("Popped element is: ", self.arr[self.front])
            self.arr.pop(self.front)
            print(self.arr)
            self.front -= 1
    
    def peek(self):
        if self.front == -1:
            print("The Queue is empty!")
        print("Peeked: ", self.arr[self.front-2])

    def isEmpty(self):
        if self.front == -1:
            print("Yes")
        else:
            print("No")
    
    def isFull(self):
        if self.front >= self.capacity - 1:
            print("The Queue is full!")
            return True
        else:
            # print("No")
            return False
    
    def printQueueBack(self):
        if self.front <= -1:
            print("The Queue is empty!")
        for i in self.arr:
            print(i, end=" ")
        print("")
        # print(self.arr[self.front])

    def printQueueFront(self):
        if self.front <= -1:    
            print("The Queue is empty!")
        for i in range(len(self.arr)-1, -1, -1):
            print(self.arr[i], end=" ")
        print("")
        # print(self.arr[self.back1])



if __name__ == '__main__':
    stamp = Queue(5)        ## Capacity = 5
    stamp.enqueue(1)
    stamp.enqueue(2)
    stamp.enqueue(3)
    stamp.enqueue(4)
    stamp.enqueue(5)
    stamp.enqueue(6)

    stamp.isFull()
    stamp.printQueueBack()
    stamp.printQueueFront()
    stamp.deque()
    stamp.peek()
    stamp.isEmpty()
    stamp.printQueueBack()
    stamp.printQueueFront()
    stamp.deque()
    stamp.deque()
    stamp.deque()
    stamp.isFull()
    stamp.deque()
    stamp.deque()
    stamp.printQueueBack()
    stamp.printQueueFront()
    stamp.deque()

    
