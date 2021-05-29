


class BinaryTreeNode:
    def __init__(self, root):
        self.data = root
        self.left = None
        self.right = None


def height(root):
    if root == None:
        return 0
    hey = max(height(root.left), height(root.right)) + 1
    return hey


if __name__ == '__main__':
    bt = BinaryTreeNode(1)
    bt.left = BinaryTreeNode(20)
    bt.right = BinaryTreeNode(30)
    bt.left.left = BinaryTreeNode(40)
    bt.left.right = BinaryTreeNode(50)

    print(height(bt))
