//Fighter Jet implementation file
#include "FighterJet.h"

FighterJet::FighterJet(int id, string name, int speed)
    : Aircraft(id, name, speed) {}

void FighterJet::display() {
    cout << "[FighterJet] ";
    Aircraft::display();
}
