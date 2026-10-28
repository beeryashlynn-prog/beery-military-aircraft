//aircraft header file
#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <iostream>
using namespace std;

class Aircraft {
protected:
    int id;
    string name;
    int speed;

public:
    Aircraft(int id = 0, string name = "", int speed = 0);
	virtual ~Aircraft();
    virtual void display();
    int getId();
};

#endif