//LinkedList header file that inherits from Aircraft and makes linked List
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Aircraft.h"

struct Node {
    Aircraft* data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    ~LinkedList();

    void insert(Aircraft* a);
    void display();
    Aircraft* search(int id);
    void sort(); // bubble sort
};

#endif