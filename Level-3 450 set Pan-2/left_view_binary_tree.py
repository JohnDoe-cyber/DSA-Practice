

class BinaryTreeNode:
    def __init__(self, root):
        self.data = root
        self.left = None
        self.right = None




def leftViewUtil(root, level, max_level):
    
    # Base Case
    if root is None:
        return
    if (max_level[0] < level):
        print(root.data)
        max_level[0] = level

    print("arra max_lenght", max_level[0])
    print("max_lenght", max_level)

    leftViewUtil(root.left, level + 1, max_level)
    leftViewUtil(root.right, level + 1, max_level)

def leftView(root):
    max_level = [0]
    leftViewUtil(root, 1, max_level)

if __name__ == '__main__':
    bt = BinaryTreeNode(10)
    bt.left = BinaryTreeNode(20)
    bt.right = BinaryTreeNode(30)
    # bt.left.left = BinaryTreeNode(40)
    bt.left.right = BinaryTreeNode(50)
    bt.right.left = BinaryTreeNode(60)
    bt.right.right = BinaryTreeNode(70)
    bt.right.right.right = BinaryTreeNode(80)
    bt.right.right.right.left = BinaryTreeNode(90)



    # print(height(bt))
    leftView(bt)