//Dynamic array header file of pilots
#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include "Pilot.h"

class DynamicArray {
private:
    Pilot* arr;
    int size;
    int capacity;

public:
    DynamicArray();
    ~DynamicArray();

    void add(Pilot p);
    void display();
    int search(int hours);
    void sort(); // selection sort
};

#endif