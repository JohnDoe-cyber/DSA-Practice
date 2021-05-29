

class SinglyLinkedListNode():
    def __init__(self, node_data):
        self.data = node_data
        self.next = None



class SinglyLinkedList():
    def __init__(self):
        self.head = None
        self.tail = None
    
    def insert_node(self, node_data):
        node = SinglyLinkedListNode(node_data)

        if not self.head:
            self.head = node
        else:
            self.tail.next = node
        
        self.tail = node

    def print_nodes(self, head):
        # print(self.head.data)
        while self.head:
            print(self.head.data)
            self.head = self.head.next


Ss = SinglyLinkedList()
Ss.insert_node("A")
Ss.insert_node("B")
Ss.insert_node("C")


Ss.print_nodes(Ss.head)