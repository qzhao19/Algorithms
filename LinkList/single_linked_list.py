class Node(object):
    def __init__(self, data, next=None):
        self.data = data
        self.next = next

class LinkedList(object):
    def __init__(self):
        """
        """
        self.head = None

    def is_empty(self):
        """check if linked list is empty
        """
        return self.head is None
    
    def push(self, data):
        # create a new node
        new_node = Node(data)
        # Make next of new Node as head 
        new_node.next = self.head
        self.head = new_node

    def insert(self, prev_node, data):
        """Inserts a new node after the given prev_node
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

    def append(self, data):
        """Appends a new node at the end.
        """

        # create a new node
        new_node = Node(data)

        # make sure if a head node is exist, 
        # then make the new node as head 
        if self.head is None:
            self.head = new_node
            return 
        last = self.head
        while last.next is not None:
            last = last.next

        # last node points to new_node
        last.next = new_node

    def print_all(self):
        """
        """
        current_node = self.head
        while current_node:
            print(current_node.data)
            current_node = current_node.next
