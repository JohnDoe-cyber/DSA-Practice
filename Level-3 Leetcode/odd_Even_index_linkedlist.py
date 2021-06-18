

def oddEvenList(self, head):
    i = head
    j = head.next
    
    while (i.next != None or j.next != None):
        if (j.next):
            i.next = j.next
        if (i.next.next):
            j.next = i.next.next
            
        i = i.next
        j = j.next
        
    while (i.next!=None):
        i = i.next
        print(i.val)
    i.next = head.next
