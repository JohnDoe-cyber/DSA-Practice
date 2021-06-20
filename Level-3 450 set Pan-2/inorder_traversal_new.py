

class BinaryTreeNode:
    def __init__(self, root):
        self.data = root
        self.left = None
        self.right = None




def InOrderUtil(root, level, max_level):
    
    # Base Case
    if root is None:
        return

    if (max_level < level):
        print(root.data)
        max_level = level

    InOrderUtil(root.left, level + 1, max_level)
    InOrderUtil(root.right, level + 1, max_level)

def InOrder(root):
    max_level = 0
    InOrderUtil(root, 1, max_level)

if __name__ == '__main__':
    bt = BinaryTreeNode(10)
    bt.left = BinaryTreeNode(20)
    bt.right = BinaryTreeNode(30)
    bt.left.left = BinaryTreeNode(40)
    bt.left.right = BinaryTreeNode(50)
    bt.right.left = BinaryTreeNode(60)
    bt.right.right = BinaryTreeNode(70)

    # print(height(bt))
    InOrder(bt)