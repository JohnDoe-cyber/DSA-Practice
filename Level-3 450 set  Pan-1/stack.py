
# Push, Pop, Peek, IsEmpty, PrintStack
class Stack:
    def __init__(self):
        self.arr = []
        self.top = -1


    def push(self, x):
        self.arr.append(x)
        self.top += 1
    
    def pop(self):
        if self.top == -1:
            print("The Stack is empty!")
        else:
            print("Popped element is: ", self.arr[self.top])
            self.arr.pop(-1)
            self.top -= 1
    
    def peek(self):
        if self.top == -1:
            print("The Stack is empty!")
        print("Peeked: ", self.arr[self.top])

    def IsEmpty(self):
        if self.top == -1:
            print("The Stack is empty!")
        else:
            print("No")
    
    def printStack(self):
        if self.top <= -1:
            print("The Stack is empty!")
        for i in self.arr:
            print(i, end=" ")
        print("")











if __name__ == '__main__':
    stamp = Stack()
    stamp.push(1)
    stamp.push(2)
    stamp.push(3)
    stamp.push(4)
    stamp.printStack()
    stamp.pop()
    stamp.peek()
    stamp.IsEmpty()
    stamp.printStack()
    stamp.pop()
    stamp.pop()
    stamp.pop()
    stamp.pop()
    stamp.printStack()
    stamp.pop()

    
