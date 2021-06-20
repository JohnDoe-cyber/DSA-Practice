
class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key


def insert(root, data):
    if root is None:   ## Either when it comes from eq 1 or 2 it makes a new node and returns back which is further attached to it
        root = Node(data)
    else:
        if root.val == data:    ## This condition happens if the Node is found to be same which is not allowed in BST
            return root
        elif data > root.val:
            root.right = insert(root.right, data)    ## eq 1
        else:
            root.left = insert(root.left, data)      ## eq 2
    
    return root


def searchBST(root, data):
    # if root.val == None:
    #     return root
    # else:
    while root!=None:
        if data > root.val:
            root = root.right
        elif data < root.val:
            root = root.left
        else:
            return root   


def inorder_traversal(root):
    if root == None:
        return 0
    
    inorder_traversal(root.left)
    print(root.val, end=" ")
    inorder_traversal(root.right)




r = Node(50)
r = insert(r, 30)
r = insert(r, 20)
r = insert(r, 40)
r = insert(r, 70)
r = insert(r, 60)
r = insert(r, 80)

# inorder_traversal(r)
xxx = searchBST(r, 70)
inorder_traversal(xxx)

