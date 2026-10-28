//Aircraft implementation file
#include "Aircraft.h"

Aircraft::Aircraft(int id, string name, int speed) {
    this->id = id;
    this->name = name;
    this->speed = speed;
}

void Aircraft::display() {
    cout << "ID: " << id << " Name: " << name << " Speed: " << speed << endl;
}

int Aircraft::getId() {
    return id;
}
Aircraft::~Aircraft() {}