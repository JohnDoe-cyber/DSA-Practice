class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def push_at_front(self,new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    ## With O(n)            # This can be optimized to O(1) by keeping an extra pointer to tail of linkedlist
    def push_at_end(self, new_data):
        new_node = Node(new_data)
        if self.head is None:
            self.head = new_node
            return 
        last = self.head
        while (last.next):
            last = last.next
        
        last.next = new_node
    

    
    def insertAfter(self, prev_node, new_data):
        if prev_node is None:
            print("There is no Prev node given !! Put it nutsucker")
            return 
        new_node = Node(new_data)
        new_node.next = prev_node.next
        prev_node.next = new_node

    def PrintList(self):
        temp = self.head
        stringy = ""
        while (temp):
            # print(temp.data)
            stringy += str(temp.data) + "  --->  "
            temp = temp.next
        print(stringy)


if __name__ == '__main__':
    llist = LinkedList()
    llist.push_at_end(6)
    llist.push_at_end(2)
    llist.insertAfter(llist.head.next, 20)
    llist.push_at_front(8)
    llist.insertAfter(llist.head.next.next, 300)

    llist.insertAfter(llist.head.next.next, 150)


    llist.PrintList()

