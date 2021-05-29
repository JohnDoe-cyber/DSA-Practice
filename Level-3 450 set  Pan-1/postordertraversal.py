

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

## Recursive
def postorder_traversal(root):
    if root == None:
        return 0
    
    postorder_traversal(root.left)
    postorder_traversal(root.right)
    print(root.data)


## Iterative method
def preorder_traversal2(root):
    arr = []
    now_root = root
    while arr or now_root:
        if now_root:
            arr.append(now_root)
            now_root = now_root.left
        else:
            now_root = arr.pop(0)
            now_root = now_root.right
            print(now_root.data)

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


    postorder_traversal(bt)