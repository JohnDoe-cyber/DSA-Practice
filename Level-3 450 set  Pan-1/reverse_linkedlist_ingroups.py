class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def reverse(self, k):
        prev = None
        current = self.head
        while (current.data != k):
            next = current.next
            current.next = prev
            prev = current
            current = next
        self.head = prev
        # print(current.data, "hsbdjf")
        # print(self.head.data, "hsbdjf")

        new_original_head = self.head

        # self.printList()

        for i in range(k-1):
            self.head = self.head.next
        something = self.head
        prev = None
        while (current is not None):
            next = current.next
            current.next = prev
            prev = current
            current = next
        self.head = prev
        # print(current.data, "hsbdjf")
        # print(self.head.data, "hsbdjf")
        # print(something.data, "hsbdjf")
        something.next = self.head
        # print(something.next.data, "hsbdjf")

        self.head = new_original_head
        # self.

        # self.printList()

        # print(current.data, "hsbdjf")


    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    def printList(self):
        temp = self.head
        while (temp):
            print(temp.data)
            temp = temp.next



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
llist.reverse(4)
print("\nReversed Linked List")
llist.printList()









# def reverse(self,head, k):
#         # Code here
#         prev = None
#         current = head
#         while (current.data != k):
#             next = current.next
#             current.next = prev
#             prev = current
#             current = next
#         head = prev
#         # print(current.data, "hsbdjf")
#         # print(self.head.data, "hsbdjf")

#         new_original_head = head

#         # self.printList()

#         for i in range(k-1):
#             head = head.next
#         something = head
#         prev = None
#         while (current is not None):
#             next = current.next
#             current.next = prev
#             prev = current
#             current = next
#         head = prev
#         # print(current.data, "hsbdjf")
#         # print(self.head.data, "hsbdjf")
#         # print(something.data, "hsbdjf")
#         something.next = head
#         # print(something.next.data, "hsbdjf")

#         head = new_original_head