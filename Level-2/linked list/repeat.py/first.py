class Node:
    def __init__(self, data):
        self.data = data 
        self.next = None 

class LinkedList:
    def __init__(self):
        self.head = None

    def printList(self):
        x = self.head 
        while x:
            print(x.data)
            x = x.next
        print("")
    


listy = LinkedList()
listy.printList()          

listy.head = Node(1)
second = Node(2)


listy.head.next = second
listy.printList()

third = Node(3)
second.next = third

listy.printList()

        