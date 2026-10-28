//bomber header file
#ifndef BOMBER_H
#define BOMBER_H

#include "Aircraft.h"

class Bomber : public Aircraft {
public:
    Bomber(int id, string name, int speed);
    void display() override;
};

#endif