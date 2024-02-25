#ifndef LINKED_LIST_CHALLENGE_H
#define LINKED_LIST_CHALLENGE_H

/**
 * Definition for a singly linked list node.
 */
struct SingleNode {
  char val;
  SingleNode *next;
};

/**
 * Definition for a doubly linked list node.
 */
struct DoubleNode {
  char val;
  DoubleNode *prev;
  DoubleNode *next;
};

/**
 * Function declaration for hello world printing
 */
int helloWorld();

#endif