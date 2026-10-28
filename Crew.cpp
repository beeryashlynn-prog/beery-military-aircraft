//crew implementation file
#include "Crew.h"

Crew::Crew() {
    name = "";
    age = 0;
    role = "";
}

Crew::Crew(string name, int age, string role) {
    this->name = name;
    this->age = age;
    this->role = role;
}