


class BinaryTreeNode:
    def __init__(self, root):
        self.root = root
        self.left = None
        self.right = None


    def height(self, root):
        self.h = None
        # if root == None:
        #     return 0
        # hey = max(self.height(root.left), self.height(root.right)) + 1
        # return hey

    def diameter(self, root):
        if root == None:
            current_diameter = 0
            return 0
        
        left_height = 0
        right_height = 0
        
        left_diameter = self.diameter(root.left)
        right_diameter = self.diameter(root.right)

        current_diameter = left_height + right_height + 1;
        self.h = max(left_height, right_height) + 1


        print(self.height(root.left))
        print(self.height(root.right))
        diameter = self.height(root.left) + self.height(root.right) + 1

        # diameter = max(left_diameter, right_diameter) + 1

        return max(current_diameter, max(left_diameter, right_diameter))



if __name__ == '__main__':
    bt = BinaryTreeNode(1)
    bt.left = BinaryTreeNode(20)
    bt.right = BinaryTreeNode(30)
    bt.right.left = BinaryTreeNode(120)
    bt.right.right = BinaryTreeNode(330)
    bt.left.left = BinaryTreeNode(40)
    bt.left.left.left = BinaryTreeNode(50)
    # bt.left.right = BinaryTreeNode(50)


    print(bt.diameter(bt))