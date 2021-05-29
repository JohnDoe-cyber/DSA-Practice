class Node:
    def __init__(self, item) -> None:
        self.item = item
        self.next = None

class LinkedList:
    def __init__(self) -> None:
        self.head = None


if __name__ == "__main__":
    linkedlist = LinkedList()

    ## Assigning item values
    linkedlist.head = Node(1)
    second = Node(2)
    third = Node(3)
    forth = Node(4)



    linkedlist.next = second
    second.next = third
    third.next = forth

    print(linkedlist)
    

## Application :

    # Dynamic memory allocation
    # Implementation in stack and queue
    # Real life application in undo buttons
    # Hash tables and Graphs

    