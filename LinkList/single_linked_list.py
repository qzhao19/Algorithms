class Node(object):
    def __init__(self, data, next=None):
        self.data = data
        self.next = next


class LinkedList(object):
    """
    """
    def __init__(self):
        # define a head node, default None
        self._head = None

    def is_empty(self):
        """
        """
        return self._head = None

    def append_first(self, data):
        """Add a new data in the first list
        """
        new_node = Node(data)
        new_node.next = self._head
        self_head = new_node

    def append_last(self, data):
        """Add a new data node in the last list
        """
        new_node = Node(data)

        if self._head is None:
            self._head = new_node
            return

        while self._head.next is not None:
            self._head = self._head.next

        self._head.next = new_node

    def insert_

        
            

