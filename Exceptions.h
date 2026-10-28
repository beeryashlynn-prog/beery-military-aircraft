//Exceptions classes
#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>
using namespace std;

class FileNotFoundException {
public:
    void message() { cout << "Error: File not found.\n"; }
};

class InvalidInputException {
public:
    void message() { cout << "Error: Invalid input.\n"; }
};

class EmptyListException {
public:
    void message() { cout << "Error: List is empty.\n"; }
};

#endif