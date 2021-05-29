


class PriorityQueueBase:
    '''Abstract base class for a priority Queue'''
    class _Item:
        '''LightWeight composite to store priority queue items'''
        __slots__ = '_key', '_value'

        def __init__(self, k, v):
            self._key = k
            self._value = v

        def __lt__(self, other):
            return self._key < other.__key   ## Compare items based on their keys

    
    def is_empty(self):
        return len(self) == 0


        
