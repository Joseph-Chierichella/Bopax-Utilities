// Copyright (c) 2025 Joseph Chierichella | All rights reserved


#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> vec1;

int store() {
	string input1;
	cout << "Enter something : ";
	getline(cin, input1);
	vec1.push_back(input1);
	return 0;
}

int fshow() {
	
	int i = 1;
	while (i != 2) { 
		int input2;
		cout << "    Notes1" << endl;
		cout << "~~~~~~~~~~~~~~" << endl;
		cout << " Enter 1 for showing notes" << endl;
		cout << " Enter 2 to exit program" << endl;
		cout << "!: ";
		cin >>input2;
		if (input2 == 2) {
			cout << "EXITING PROGRAM" << endl;
			int i = 2;
			break;
		}
		else if (input2 == 1) {
			for (const string& str : vec1) {
				cout << str << endl;
			}
		}
		else {
			cout << "ERROR" << endl;
		}
	}
	return 0;
}

int main() {
	store();
	fshow();
	return 0;
}



