//Linked list implementation
#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp->data;
        delete temp;
    }
}

void LinkedList::insert(Aircraft* a) {
    Node* newNode = new Node{a, nullptr};

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void LinkedList::display() {
    Node* temp = head;
    while (temp != nullptr) {
        temp->data->display();
        temp = temp->next;
    }
}

Aircraft* LinkedList::search(int id) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data->getId() == id)
            return temp->data;
        temp = temp->next;
    }
    return nullptr;
}

// Bubble sort by ID
void LinkedList::sort() {
    if (!head) return;

    bool swapped;
    Node* ptr;
    Node* last = nullptr;

    do {
        swapped = false;
        ptr = head;

        while (ptr->next != last) {
            if (ptr->data->getId() > ptr->next->data->getId()) {
                Aircraft* temp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = temp;
                swapped = true;
            }
            ptr = ptr->next;
        }
        last = ptr;
    } while (swapped);
}