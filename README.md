# beery-military-aircraft
Ashlynn Beery
Course: CPE 212
Semester: Spring 2026
Military Aircraft Management System
Description
This project is a command-line based C++ application that manages a collection of military aircraft and pilots. It demonstrates key programming concepts including object-oriented design, dynamic memory management, data structures, searching and sorting algorithms, and file handling.
________________


 Features
* Add different types of aircraft (FighterJet, Bomber, Transport)
* Display all aircraft
* Search aircraft by ID
* Sort aircraft using Bubble Sort (Linked List)
* Manage pilot data using a dynamic array
* Sort pilots by flight hours using Selection Sort
* Basic file input/output
* Error handling using custom exception classes
________________


 Project Structure
Classes
* Aircraft (base class)
* FighterJet, Bomber, Transport (derived classes)
* Member (struct)
* Crew → Pilot (inheritance chain)
* MissionReady (multiple inheritance)
Data Structures
* Linked List → Stores Aircraft
* Dynamic Array → Stores Pilots
Structs
* Member 
* Node
Exceptions
* FileNotFoundException
* InvalidInputException
* EmptyListException 
________________


 Searching & Sorting
* Linked List
   * Search: Linear Search
   * Sort: Bubble Sort
* Dynamic Array
   * Search: Linear Search
   * Sort: Selection Sort
________________


Compilation Instructions
To compile the main program:
make main


To compile the test driver:
make test


________________


 Running the Program
Run main program:
./program


Run test program:
./test_program


________________


Test
A separate test driver (test_driver.cpp) is included to test:
* Linked list insertion
* Display functionality
* Sorting behavior
________________


Notes:
* The program uses dynamic memory and includes destructors to prevent memory leaks.
* A virtual destructor is implemented in the base class (Aircraft) to ensure proper cleanup.
* File handling is included for demonstration purposes.
________________


Requirement:
* Object-Oriented Programming (inheritance, polymorphism)
* Multiple inheritance
* Two different data structures
* Searching and sorting algorithms
* File I/O
* Exception handling
* Makefile support
* Unit testing
