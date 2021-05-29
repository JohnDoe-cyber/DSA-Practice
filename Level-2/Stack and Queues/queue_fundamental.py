
class Queue():
    def __init__(self):
        self.abc = []
    def enqueue(self, val):
        self.abc.insert(0, val)                     ## Can use deque.appendleft() method by importing deque from collections

    def dequeue(self):
        return self.abc.pop()

    def peek(self):
        self.abc[-1]

    def isempty(self):
        print(True if len(self.abc)==0 else False)

    def size(self):
        print(len(self.abc))
    
    def printqueue(self):
        print(self.abc)


if __name__ == "__main__":
    cc =Queue()

    cc.isempty()

    cc.enqueue(23)
    cc.isempty()
    cc.enqueue(223)
    cc.enqueue(123)
    cc.enqueue(623)

    cc.printqueue()

    cc.dequeue()
    cc.printqueue()




