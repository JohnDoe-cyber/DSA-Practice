from .composition_design_pattern import PriorityQueueBase


class UnsortedPriorityQueue(PriorityQueueBase):
    '''A min-oriented priority queue implementation with an unsorted list'''

    def _find_min(self):
        if self.is_empty():
            raise Empty('Priority Queue is empty')
        small = self._data.first()
        walk = self._data.after(small)
        while walk is not None:
            if walk.element() < small.element():
                small = walk
            walk = self._data.after(walk)
