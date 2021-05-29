
class SinglyLinkedListNode:
    def __init__(self, node_data):
        self.data = node_data
        self.next = None


class SinglyLinkedList:
    def __init__(self):
        self.head = None

def print_singly_linked_list(node, sep):
    while node:
        print(str(node.data))

        node = node.next

        if node:
            print(sep)


def insertNodeAtTail(head, data):
    if head is None:
        return SinglyLinkedListNode(data)
    
    



llist = SinglyLinkedList()
llist_item = [1,2,3,4,5,6]

for i in llist_item:
    llist_head = insertNodeAtTail(llist.head, llist_item)
    llist.head = llist_head

print_singly_linked_list(llist.head, '\n')
