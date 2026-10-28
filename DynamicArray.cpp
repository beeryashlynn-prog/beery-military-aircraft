//Dynamic array implementation file
#include "DynamicArray.h"
#include <iostream>
using namespace std;

DynamicArray::DynamicArray() {
    capacity = 5;
    size = 0;
    arr = new Pilot[capacity];
}

DynamicArray::~DynamicArray() {
    delete[] arr;
}

void DynamicArray::add(Pilot p) {
    if (size == capacity) {
        capacity *= 2;
        Pilot* newArr = new Pilot[capacity];

        for (int i = 0; i < size; i++)
            newArr[i] = arr[i];

        delete[] arr;
        arr = newArr;
    }

    arr[size++] = p;
}

void DynamicArray::display() {
    for (int i = 0; i < size; i++) {
        cout << arr[i].name << " | Hours: " << arr[i].flightHours << endl;
    }
}

// Linear search
int DynamicArray::search(int hours) {
    for (int i = 0; i < size; i++) {
        if (arr[i].flightHours == hours)
            return i;
    }
    return -1;
}

// Selection sort by flight hours
void DynamicArray::sort() {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j].flightHours < arr[minIndex].flightHours)
                minIndex = j;
        }

        Pilot temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}