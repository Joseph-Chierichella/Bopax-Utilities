// Copyright (c) 2025 Joseph Chierichella | All rights reserved

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> vecn;   // name of notes
vector<string> vecno;  // notes

int create() {
    string name;
    cout << "Enter name of the file (one word without '.') : ";
    cin >> name;
    vecn.push_back(name);
    string notes;
    cout << name << ".txt" << endl;
    cout << ": ";
    cin.ignore();
    getline(cin, notes);
    vecno.push_back(notes);
    return 0;
}

void display() {
    cout << "\n--- Notes List ---" << endl;
    for (size_t i = 0; i < vecn.size(); ++i) {
        cout << vecn[i] << ".txt: " << vecno[i] << endl;
    }
    cout << "------------------" << endl;
}

int main() {
    int UserInput;
    while (UserInput != 3) {
        cout << "       NOTEPAD" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << " 1 ) MAKE NEW NOTES" << endl;
        cout << " 2 ) VIEW NOTES" << endl;
        cout << " 3 ) EXIT PROGRAM" << endl;
        int UserInput;
        cout << "!: ";
        cin >> UserInput;
        if (UserInput == 3) {
            cout << "EXITING PROGRAM" << endl;
            break;
        }
        else if (UserInput == 1) {
            create();
        }
        else if (UserInput == 2) {
            display();
        }
    }


    return 0;
}
