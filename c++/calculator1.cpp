// Copyright (c) 2025 Joseph Chierichella | All rights reserved


#include <iostream>

using namespace std;

int operation1() {
    float operation11;
    cout << ": ";
    cin >> operation11;
    float operation12;
    cout << ": " << operation11 << " + " << "";
    cin >> operation12;
    float operation13 = operation11 + operation12;
    cout << ": " << operation11 << " + " << operation12 << " = " << operation13 << endl;
    return 0;
}

int operation2() {
    float operation21;
    cout << ": ";
    cin >> operation21;
    float operation22;
    cout << ": " << operation21 << " - " << "";
    cin >> operation22;
    float operation23 = operation21 - operation22;
    cout << ": " << operation21 << " - " << operation22 << " = " << operation23 << endl;
    return 0;
}


int operation3() {
    float operation31;
    cout << ": ";
    cin >> operation31;
    float operation32;
    cout << ": " << operation31 << " X " << "";
    cin >> operation32;
    float operation33 = operation31 * operation32;
    cout << ": " << operation31 << " X " << operation32 << " = " << operation33 << endl;
    return 0;
}

int operation4() {
    float operation41;
    cout << ": ";
    cin >> operation41;
    float operation42;
    cout << ": " << operation41 << " / " << "";
    cin >> operation42;
    float operation43 = operation41 / operation42;
    cout << ": " << operation41 << " / " << operation42 << " = " << operation43 << endl;
    return 0;
}


int main() {

    int input;
    while (input != 5) {
        cout << "" << endl;
        cout << "   Calculator" << endl;
        cout << " ~~~~~~~~~~~~~~~" << endl;
        cout << " 1) ADDITION" << endl;
        cout << " 2) SUBTRACTION" << endl;
        cout << " 3) MULTIPLICATION" << endl;
        cout << " 4) DIVISION" << endl;
        cout << " 5) EXIT" << endl;
        int input;
        cout << "!: ";
        cin >> input;
        if (input == 5) {
            cout << "Thanks for using the calculator";
            break;
        }
        else if (input == 1) {
            operation1();
        }
        else if (input == 2) {
            operation2();
        }
        else if (input == 3) {
            operation3();    
        }
        else if (input == 4) {
            operation4();
        }
        
        
    }
    
    return 0;
}   
