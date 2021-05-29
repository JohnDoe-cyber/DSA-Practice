
class Stack:
    def __init__(self):
        self.abc = []
    def push(self, val):
        self.abc.append(val)
    def delete(self):
        self.abc.pop()
    def printmax(self):
        print(max(self.abc))




if __name__ == "__main__":
    ss = Stack()
    n = int(input())
    for i in range(n):
        x = list(map(str, input().split()))
        if x[0]=='1':
            ss.push(x[1])
        elif x[0]=='2':
            ss.delete()
        else:
            ss.printmax()