import math
import os
import random
import re
import sys

class SinglyLinkedListNode:
    def __init__(self, node_data):
        self.data = node_data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None


def print_singly_linked_list(node, sep):
    while node:
        # fptr.write(str(node.data))
        print(node.data)

        node = node.next

        if node:
            # fptr.write(sep)
            print(sep)


def insertNodeAtHead(llist, data):
    new_data = SinglyLinkedListNode(data)
    new_data.next = llist
    print(llist)
    llist = new_data

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    llist_count = int(input())

    llist = SinglyLinkedList()

    for _ in range(llist_count):
        llist_item = int(input())
        llist_head = insertNodeAtHead(llist.head, llist_item)
        # llist.head = llist_head
    
    print_singly_linked_list(llist.head, '\n')
    # fptr.write('\n')

    # fptr.close()
