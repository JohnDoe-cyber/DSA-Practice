

class Node:
    def __init__(self, data):
        self.data = data 
        self.next = None 



class Linkedlist:
    def __init__(self):
        self.head = None 

    def pushattail(self, new_data):
        if self.head == None:
            self.head = Node(new_data)
        else:
            temp = self.head
            while temp.next is not None:
                temp = temp.next
            new_node = Node(new_data)
            temp.next = new_node


    def pushathead(self, new_data):
        temp = self.head
        new_node = Node(new_data)
        new_node.next = temp
        self.head = new_node

    def printlist(self):
        temp = self.head
        while temp:
            print(temp.data, end=" -> ")
            temp = temp.next
        print("")


    def reverse(self):
        prev = None 
        current = self.head
        nexty = self.head.next
        while current is not None:
            if current.next is not None:
                current.next = prev
                prev = current
                current = nexty
                nexty = nexty.next
            else:
                current.next = prev
                prev = current
                current = nexty

        self.head = prev


def reverse(head):
    if head == None or head.next == None:
        return head
    new_head = reverse(head.next)
    head.next.next = head
    # print(head.next.next.data)
    # print(head.next.data)
    head.next = None

    return new_head
    
    






if __name__ == '__main__':
    linky = Linkedlist()
    linky.pushattail(2)
    linky.pushattail(4)
    linky.pushattail(7)
    linky.pushattail(13)
    linky.printlist()
    linky.pushathead(21)
    linky.pushathead(45)
    linky.printlist()
    linky.head = reverse(linky.head)
    linky.printlist()
    linky.reverse()
    linky.printlist()





