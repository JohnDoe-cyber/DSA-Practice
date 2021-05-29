
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

        # repr() returns a string that holds a printable representation of an object.
        # str() and repr() both are used to get a string representation of object.

        # If we print a string using repr() function then it prints with a pair of quotes and if we calculate a value we get a mre precise value than str() function.

        # repr is mainly used for debugging and development while str is used for users
        # repr - unambiguous
        # str - readable


    def __repr__(self):
        return self.data


    
class LinkedList:
    def __init__(self):
        self.head = None

    
    def __repr__(self):
        node = self.head
        nodes = []
        while node is not None:
            nodes.append(node.data)
            node = node.next
        nodes.append("None")

        return " -> ".join(nodes)




llist = LinkedList()
print(llist)
print("")

first_node = Node("a")
llist.head = first_node


print(llist)
print("")

second_node = Node("b")

print(llist)
print("")

first_node.next = second_node

print(llist)
print("")

third_node = Node("c")
second_node.next = third_node


print(llist)
print("")