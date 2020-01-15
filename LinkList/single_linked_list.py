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

    def insert_before(self, prev_node, data):
        """Insert a new data node in a specific position which is before a node
        """
        # make sure if the given prev_node exists 
        if prev_node is None: 
            print('The given previous node must inLinkedList.')
            return
        # create a new node
        new_node = Node(data)

        # new node must point to a node that prev node pointed
        new_node.next = prev_node.next
        # change prev_node point to current new node
        prev_node.next = new_node

    def find(self, target, next_node, n_nodes):
        """Find the first node from nth succscor node at the target node

        """
        while n_nodes>0:
            curr_node = next_node.next
            if taget == curr_node.data:
                return curr_node
            return None


    def delete_node(self, target):
        """

        """
        
            


