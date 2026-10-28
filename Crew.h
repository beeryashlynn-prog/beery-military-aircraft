//Crew header file
#include <string>
#ifndef CREW_H
#define CREW_H

using namespace std;

struct Member {
    string name;
    int age;
};

class Crew : public Member {
public:
    string role;
    Crew();
    Crew(string name, int age, string role);
};

#endif
