class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None


    # Function that prints the content of the linked list
    def printList(self):
        x = self.head 
        while x:
            print(x.data)
            x = x.next


listy = LinkedList()
listy.head = Node(1)
second = Node(2)
third = Node(3)

listy.head.next = second
second.next = third

listy.printList()
