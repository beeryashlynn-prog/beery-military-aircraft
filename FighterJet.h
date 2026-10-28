//Fighter jet header file
#ifndef FIGHTERJET_H
#define FIGHTERJET_H

#include "Aircraft.h"

class FighterJet : public Aircraft {
public:
    FighterJet(int id, string name, int speed);
    void display() override;
};

#endif