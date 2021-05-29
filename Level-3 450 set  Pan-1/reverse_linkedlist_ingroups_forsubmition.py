class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    def printList(self):
        temp = self.head
        while (temp):
            print(temp.data, end=" ")
            temp = temp.next
        print()

    def reverse(self, head, k):
        if head == None:
            return None
        current = head
        next = None
        prev = None
        count = 0

        while(current is not None and count < k):
            next = current.next
            current.next = prev
            prev = current
            current = next
            count += 1


        if next is not None:
            head.next = self.reverse(next, k)


        return prev



# Driver code
llist = LinkedList()
llist.push(1)
llist.push(2)
llist.push(2)
llist.push(4)
llist.push(5)
llist.push(6)
llist.push(7)
llist.push(8)


print("Given Linked List")
llist.printList()


## Root of all evil that was causing me pain .. only if I knew 
# that I should have had put tyhe llist.head = '''the reverse one'''
llist.head = llist.reverse(llist.head, 4)          
print("\nReversed Linked List")
llist.printList()




