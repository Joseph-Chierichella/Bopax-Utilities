// Copyright (c) 2025 Joseph Chierichella | All rights reserved


#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> MyVector;

int first() {
	string UserInput1;
	cout << "Enter something! : ";
	getline(cin, UserInput1);
	MyVector.push_back(UserInput1);

	string UserInput2;
	cout << "Enter something else! : ";
	getline(cin, UserInput2);
	MyVector.push_back(UserInput2);
	return 0;
}	

int main() {
	first();
        for (const string& str : MyVector) {
                cout << str << endl;                               
        }     


	return 0;
}

