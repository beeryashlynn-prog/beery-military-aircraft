//main file
#include <iostream>
#include <fstream>

#include "FighterJet.h"
#include "Bomber.h"
#include "Transport.h"
#include "LinkedList.h"
#include "DynamicArray.h"
#include "Exceptions.h"

using namespace std;

int main() {
    LinkedList aircraftList;
    DynamicArray pilotArray;

    int choice;

    do {
        cout << "\n--- Military Aircraft System ---\n";
        cout << "1. Add Aircraft\n";
        cout << "2. Display Aircraft\n";
        cout << "3. Search Aircraft\n";
        cout << "4. Sort Aircraft\n";
        cout << "5. Save to File\n";
        cout << "6. Load from File\n";
        cout << "7. Add Pilot\n";
        cout << "8. Display Pilots\n";
        cout << "9. Sort Pilots\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        try {
            if (cin.fail()) throw InvalidInputException();

            if (choice == 1) {
                int id, speed, type;
                string name;

                cout << "Enter ID: "; cin >> id;
                cout << "Enter Name: "; cin >> name;
                cout << "Enter Speed: "; cin >> speed;
                cout << "Type (1=Fighter,2=Bomber,3=Transport): ";
                cin >> type;

                if (type == 1)
                    aircraftList.insert(new FighterJet(id, name, speed));
                else if (type == 2)
                    aircraftList.insert(new Bomber(id, name, speed));
                else
                    aircraftList.insert(new Transport(id, name, speed));
            }

            else if (choice == 2) {
                aircraftList.display();
            }

            else if (choice == 3) {
                int id;
                cout << "Enter ID: ";
                cin >> id;

                Aircraft* found = aircraftList.search(id);
                if (found)
                    found->display();
                else
                    cout << "Not found.\n";
            }

            else if (choice == 4) {
                aircraftList.sort();
                cout << "Sorted.\n";
            }

            else if (choice == 5) {
                ofstream file("aircraft.txt");
                if (!file) throw FileNotFoundException();

                // simple save (display-style)
                cout << "Saved (visual only).\n";
            }

            else if (choice == 6) {
                ifstream file("aircraft.txt");
                if (!file) throw FileNotFoundException();

                cout << "Loaded (not fully implemented).\n";
            }

            else if (choice == 7) {
                string name, role;
                int age, hours;

                cout << "Name: "; cin >> name;
                cout << "Age: "; cin >> age;
                cout << "Role: "; cin >> role;
                cout << "Flight Hours: "; cin >> hours;

                pilotArray.add(Pilot(name, age, role, hours));
            }

            else if (choice == 8) {
                pilotArray.display();
            }

            else if (choice == 9) {
                pilotArray.sort();
                cout << "Pilots sorted.\n";
            }

        } catch (InvalidInputException& e) {
            e.message();
            cin.clear();
            cin.ignore(1000, '\n');
        } catch (FileNotFoundException& e) {
            e.message();
        }

    } while (choice != 0);

    return 0;
}