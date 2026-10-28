//Bomber implementation file
#include "Bomber.h"

Bomber::Bomber(int id, string name, int speed)
    : Aircraft(id, name, speed) {}

void Bomber::display() {
    cout << "[Bomber] ";
    Aircraft::display();
}