

// Copyright (c) 2025 Joseph Chierichella | All rights reserved.

// Error when depositing and withdrawing large quanity of $
// if you can fix the error please do

#include <iostream>
#include <string>

using namespace std;

int balance = 500;


int dep() {
    int i = 1;
    while (i != 2) {
        int deposit;
        cout << "Enter amount : $";
        cin >> deposit;
        if (deposit <= 0) {
            cout << "Deposit must be more than $0" << endl;
        }
        else {
            balance = deposit + balance;
            cout << "New balance is $" << balance << endl;
            int i = 2;
            break;
        }
    }
    return 0;
}

int wdraw() {
    int i = 1;
    while (i != 2) {
        int draw;
        cout << "Enter amount : $";
        cin >> draw;
        if (draw <= 0) {
            cout << "Withdraw must be more than $0" << endl;
        }
        else if (balance < draw) {
            cout << "Insufficient funds" << endl;
        }
        else {
            balance = balance - draw;
            cout << "New balance is $" << balance << endl;
            int i = 2;
            break;
        }
    }
    return 0;
}

int home() {
    int i = 0;
    while (i != 3) {
        cout << "" << endl;
        cout << " ATM        $" << balance << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << " 1 ) DEPOSIT" << endl;
        cout << " 2 ) WITHDRAW" << endl;
        cout << " 3 ) EXIT" << endl;
        cout << ": ";
        cin >> i;
        if (i == 3) {
            cout << "Program finished";
            break;
        }
        else if (i == 1) {
            dep();
        }
        else if (i == 2) {
            wdraw();
        }
    }
    return 0;
}


int main() {
    home();
    return 0;
}  
