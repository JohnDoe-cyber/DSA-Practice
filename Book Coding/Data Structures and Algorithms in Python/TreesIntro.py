

class Tree:
    '''Abstract Base Class representing a tree data structure'''

    class Position:
        '''An Abstraction representing the location of a single element'''

        def element(self):
            ## Returns the element stored at this position
            raise NotImplementedError('Must be implemented by subclass')

        def __eq__(self, other):
            ## Returns True if other position represents the same location
            raise NotImplementedError('Must be implemented by subclass')

        def __ne__(self, other):
            ## Returns True if other does not represent the same location
            return not (self == other)

    def root(self):
        ## Returns position representing the tree;s root (or None if empty) 
        raise NotImplementedError("Must be implemented by subclass")
    
    def parent(self, p):
        ## Returns the postion representing p's parent (or None if p is the root)
        raise NotImplementedError("Must be implemented by subclass")

    def num_children(self, p):
        ## Returns the number of children that position p has
        raise NotImplementedError("Must be implemented by subclass")

    def children(self, p):
        ## Generate an iteration of positions representing p's iteration
        raise NotImplementedError("Must be implemented by subclass")

    def __len__(self):
        ## Returns the total number of elements in the tree.
        raise NotImplementedError("Must be implemented by subclass")

    def is_root(self, p):
        ## Returns True if Position p represents the root of the tree.
        return self.root() == p

    def is_leaf(self, p):
        ## Returns True if position p does not have any children
        return self.num_children(p) == 0

    def is_empty(self):
        ## Returns True if the tree is empty
        return len(self) == 0


    ### Depth
    def depth(self, p):
        ## Returns the number of levels separating position p from the root
        if self.is_root():
            return 0
        else:
            return 1 + self.depth(self.parent(p))        ## Recursively finding the level

            
        
