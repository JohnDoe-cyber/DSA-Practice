

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


## Recursive
def inorder_traversal(root):
    if root == None:
        return 0
    
    inorder_traversal(root.left)
    print(root.data)
    inorder_traversal(root.right)


## Iterative method
def inorder_traversal2(root):
    arr = []
    now_root = root
    while arr or now_root:
        if now_root:
            arr.append(now_root)
            now_root = now_root.left
        else:
            now_root = arr.pop(0)
            print(now_root.data)
            now_root = now_root.right

    # arr.append(root)
    # print(arr)



if __name__ == '__main__':
    bt = Node(1)
    bt.left = Node(2)
    bt.right = Node(3)
    bt.right.left = Node(4)
    bt.right.right = Node(5)
    bt.left.left = Node(6)
    bt.left.left.left = Node(7)
    # bt.left.right = BinaryTreeNode(50)


    # inorder_traversal(bt)
    inorder_traversal2(bt)
