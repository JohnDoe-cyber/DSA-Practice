
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
    def __init__(self, nodes=None):
        self.head = None
        if nodes is not None:
            node = Node(data=nodes.pop(0))
            self.head = node
            for i in nodes:
                node.next = Node(data=i)
                node = node.next




    
    def __repr__(self):
        node = self.head
        nodes = []
        while node is not None:
            nodes.append(node.data)
            node = node.next
        nodes.append("None")

        return " -> ".join(nodes)


    def __iter__(self):
        node = self.head
        while node is not None:
            yield node
            node = node.next

    def add_first(self, node):
        node.next = self.head
        self.head = node 

    def add_last(self, node):
        if not self.head:
            self.head = node
            return 
        for current_node in self:
            pass
        current_node.next = node
    
    def add_after(self, target_node_data, new_node):
        if not self.head:
            raise Exception("List is empty!")
        
        for node in self:
            if node.data == target_node_data:
                new_node.next = node.next
                node.next = new_node
                return

        raise Exception("Node with data '{0}' not found".format(target_node_data))                  ## Only when no data found




    def add_before(self, target_node_data, new_node):
        if not self.head:
            raise Exception("List is Empty!")
        if self.head.data == target_node_data:
            return self.add_first(new_node)

        prev_node = self.head 
        for node in self:
            if node.data == target_node_data:
                prev_node.next = new_node
                new_node.next = node
                return
            prev_node = node

        raise Exception("Node with data {0} not found".format(target_node_data))



    def remove_node(self, target_node_data):
        if not self.head:
            raise Exception("List is empty!")

        if self.head.data == target_node_data:
            self.head = self.head.next
            return 

        previous_node = self.head 
        for node in self:
            if node.data == target_node_data:
                previous_node.next = node.next
                return
            previous_node = node
        raise Exception("Node with data {0} not found".format(target_node_data))




llist = LinkedList(["z", "y", "r", "t", "e"])
print(llist)

llist.add_first(Node("a"))
print(llist)

llist.add_last(Node("d"))
print(llist)


# llist = LinkedList()

llist.add_after("a", Node("k"))
print(llist)

llist.add_before("a", Node("q"))
print(llist)

llist.remove_node("a")
print(llist)


