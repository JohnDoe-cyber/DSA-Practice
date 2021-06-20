

class BinaryTreeNode:
    def __init__(self, root):
        self.data = root
        self.left = None
        self.right = None



## using queue
def leftView(root):
    
    return_array = []
    
    micro = []
    queue = []
    queue.append(root)

    while len(queue)!=0:
        for i in range(len(queue)):
            x = queue[0]
            queue = queue[1:]
            if i==0:
                micro.append(x)

            if x.left:
                queue.append(x.left)
            if x.right:
                queue.append(x.right)


    for i in range(len(micro)):
        return_array.append(micro[i].data)
    
    return return_array
        


## Using recursion
def leftView2util(root, level, maxlevel, magic_array):
    if root==None:
        return 
    if level>maxlevel:
        magic_array.append(root.data)
        maxlevel = level
    leftView2util(root.left, level+1, maxlevel, magic_array)
    leftView2util(root.right, level+1, maxlevel, magic_array)

    return magic_array


def leftView2(root):
    maxlevel = [0]
    magic_array = []
    mm = leftView2util(root, 1, maxlevel, magic_array)
    print(mm)



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



    # xx = leftView(bt)
    # print(xx)

    xx = leftView2(bt)
    print(xx)