# Linked Lists

### Table of Contents
1. [Getting Started 👈](#getting-started)
2. [Background](#background)
3. [Coding Challenges](#coding-challenges)
4. [Conceptual Questions](#conceptual-questions)
5. [Additional Topics](#additional-topics)

## Getting Started
Review the instructions for a data structure workout [here](../README.md). 

You should only add code to the source file `linked-list-challenge.cpp` and the test file `linked-list-test.cpp`.

Check out the instructions for how to compile code, run executables locally, build, and test your code [here](../README.md).

## Background
A **linked list** is a _dynamic_ data structure that consists of a sequence of elements known as nodes. 
Each node contains two fields: one for storing data (or a set of data) and one for storing the address 
of the next node in the sequence. This structure allows for efficient insertions and deletions as it 
does not require shifting elements over, unlike in an array.

Here’s a simple representation of a node in a singly linked list in C++:

```c++
struct Node {
  int data;     // data stored in the node
  Node * next;  // pointer to the next node in the list
}
```
In C++, linked lists are typically manipulated via pointers. A head pointer points to the first node in the 
list, and the next field of each node points to the subsequent node. The next field of the last node points 
to NULL, indicating the end of the list.

## Coding Challenges
The file `linked-list-challenge.cpp` contains the starter code for the following coding challenges. You can
either confirm your solution with the tests on this page or look at the solution `linked-list-solution.cpp`.

1. Write a function to insert a node at the end of a linked list.
2. Write a function to delete a node from a linked list given the key of the node to be deleted.
3. Write a function to search for a node in a linked list given its key.
4. Write a function to reverse a linked list.
5. Implement a doubly linked list with functions for insertion, deletion, and display.

## Conceptual Questions
1. What is a linked list and how does it differ from an array?
> <details>
> <summary>Answer</summary>
> A linked list is a dynamic data structure that consists of nodes, where each node contains a data field and 
> a reference (link) to the next node in the sequence. It allows for efficient insertions and deletions as it 
> does not require shifting elements over. Arrays are less efficient because they do need to shift elements over.
> Additionally, arrays are static data structures with a fixed size and allow direct access to any element 
> within the array, which is not possible in linked lists. While linked lists may be more efficient, they do use 
> more memory than arrays due to the storage used by their pointers.
> </details>
2. What are the advantages and disadvantages of using linked lists?
> <details>
> <summary>Answer</summary>
> Advantages of linked lists include dynamic size, ease of insertion/deletion, and efficient use of memory as 
> nodes are created only when required. Disadvantages include no random access (elements can only be accessed 
> sequentially), extra memory usage due to storage of pointers, and more complex data management.
> </details>
3. What is the difference between singly linked lists and doubly linked lists?
> <details>
> <summary>Answer</summary>
> In a singly linked list, each node points only to the next node in the sequence, whereas in a doubly linked 
> list, each node has a reference to both the next and the previous node in the sequence. This allows for 
> traversal in both directions in a doubly linked list. _Also note that both singly and doubly linked lists can 
> also be considered circular linked lists (where the next field of the last node points back to the head)._
> </details>
4. How does memory allocation for linked lists happen in C++?
> <details>
> <summary>Answer</summary>
> In C++, memory for linked lists is allocated dynamically using the new operator during runtime. Each time a 
> new node is created, memory is allocated for it in the heap, and when a node is deleted, the memory is 
> deallocated using the delete operator.
> </details>
5. What are some common applications of linked lists?
> <details>
> <summary>Answer</summary>
> Linked lists are used in many applications where dynamic memory allocation and efficient 
> insertions/deletions are required. Some examples include implementation of stacks, queues, graphs, and hash 
> tables. They are also used in separate chaining in hash tables to avoid collision and in dynamic memory allocation.
> </details>

## Additional Topics
1. Why were linked lists initially developed?
> <details>
> <summary>Answer</summary>
> Linked lists were developed in 1955–1956 by Allen Newell, Cliff Shaw, and Herbert A. Simon at RAND 
> Corporation and Carnegie Mellon University. They were created as the primary data structure for 
> their Information Processing Language (IPL), which was used to develop several early artificial 
> intelligence programs. Linked lists were designed to overcome some of the limitations of arrays. 
> Unlike arrays, linked lists are dynamic data structures, resizable at run-time. They allow for efficient 
> insertion or removal of elements from any position in the sequence during iteration1. This makes linked 
> lists particularly useful in situations where the data items do not need to be stored contiguously in 
> memory or on disk, and where frequent reorganization of data is required.
> </details>

