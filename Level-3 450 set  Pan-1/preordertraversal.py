

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

## Recursive
def preorder_traversal(root):
    if root == None:
        return 0
    
    print(root.data)
    preorder_traversal(root.left)
    preorder_traversal(root.right)


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
            print(now_root.data)
            now_root = now_root.right

    # arr.append(root)
    # print(arr)





if __name__ == '__main__':

    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.right.left = Node(5)
    root.right.right = Node(6)
    root.right.left.left = Node(7)
    root.right.left.right = Node(8)

    # preorder_traversal(root)
    preorder_traversal2(root)