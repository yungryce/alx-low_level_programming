# Data Structures and Linked List in C

## Introduction

Welcome to the README for the concept of Data Structures and the implementation of a Linked List using C programming. In this document, we'll explore the fundamental concepts of data structures and how a Linked List works as a popular example of a data structure. We'll also provide a basic implementation of a singly linked list in C to help you understand the concept better.

## What are Data Structures?

Data structures are fundamental constructs used in computer science to organize and store data in a way that facilitates efficient operations. They are essential for managing and manipulating data effectively, and various data structures have different strengths and weaknesses depending on the requirements of a specific problem.

Data structures provide a logical representation of data, and they can be classified into two main categories:

1. **Primitive Data Structures:** These are the basic data types provided by the programming language, such as integers, floats, characters, and arrays. They are used to store individual elements.

2. **Abstract Data Types (ADTs):** ADTs are user-defined data structures that encapsulate data and the operations performed on that data. ADTs hide the implementation details, allowing the user to interact with the data using well-defined interfaces. Examples of ADTs include Linked Lists, Stacks, Queues, Trees, and Graphs.

## Linked List

A Linked List is a dynamic data structure that falls under the category of Abstract Data Types. It consists of a sequence of elements, called nodes, where each node points to the next node in the sequence.

### Advantages of Linked Lists

- **Dynamic Size:** Linked lists can grow or shrink in size during runtime, unlike arrays with fixed sizes.

- **Easy Insertion and Deletion:** Inserting or deleting elements in a linked list can be done efficiently by changing the pointers, whereas it might require shifting elements in an array.

- **Memory Utilization:** Linked lists use memory efficiently since they allocate memory for each node only when needed.

### Types of Linked Lists

1. **Singly Linked List:** Each node in a singly linked list contains data and a pointer/reference to the next node. The last node points to NULL, indicating the end of the list.

2. **Doubly Linked List:** Each node in a doubly linked list contains data, a pointer to the next node, and a pointer to the previous node. The first node's previous pointer and the last node's next pointer point to NULL.

3. **Circular Linked List:** In a circular linked list, the last node's next pointer points back to the first node, forming a loop.

### Basic Operations on a Singly Linked List

1. **Insertion:** Add a new node to the linked list.

2. **Deletion:** Remove a node from the linked list.

3. **Traversal:** Visit each node in the linked list to perform an operation.

4. **Searching:** Find a specific element in the linked list.

## Implementation of a Singly Linked List in C

Below is a simple C program demonstrating the implementation of a singly linked list. Please note that this is a basic example and may not handle all edge cases.

```c
#include <stdio.h>
#include <stdlib.h>

// Node structure for singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Function to display the linked list
void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to free the memory allocated to the linked list
void freeList(struct Node* head) {
    struct Node* current = head;
    struct Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}

int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    printf("Linked List: ");
    displayList(head);

    freeList(head);

    return 0;
}
```

## Conclusion

Understanding data structures is crucial for any programmer or computer scientist, as they form the backbone of various algorithms and applications. Linked lists are one of the essential data structures, and we hope this README has given you a solid introduction to the concept of data structures and a basic understanding of how a singly linked list is implemented using C programming. Remember to explore more complex implementations and operations to become proficient in utilizing data structures effectively in your programs. Happy coding!
