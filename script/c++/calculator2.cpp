// Copyright (c) 2025 Joseph Chierichella | All rights reserved

#include <iostream>
#include <string>

using namespace std;


int operation1(float num1) {
	float add1;
	cout << "     |";
	cin >> add1;
	float add2;
	add2 = add1 + num1;
	cout << "     |----" << endl;
	cout << "     |" << add2 << endl;
	return 0;
}

int operation2(float num1) {
	float sub1;
	cout << "     |";
	cin >> sub1;
	float sub2;
	sub2 = num1 - sub1;
	cout << "     |----" << endl;
	cout << "     |" << sub2 << endl;
	return 0;
}

int operation3(float num1) {
	float tim1;
	cout << "     |";
	cin >> tim1;
	float tim2;
	tim2 = num1 * tim1;
	cout << "     |----" << endl;
	cout << "     |" << tim2 << endl;
	return 0;
}

int operation4(float num1) {
	float div1;
	cout << "     |";
	cin >> div1;
	float div2;
	div2 = num1 / div1;
	cout << "     |----" << endl;
	cout << "     |" << div2 << endl;
	return 0;
}




int main() {
	cout << "use the '!' operation to quit progam" << endl;
	int i = 0;
	while (i != 1) {
		int i = 0;
		float num1;
		cout << "________" << endl;
		cout << "     |";
		cin >> num1;
		string sighn;
		cout << "    !|";
		cin >> sighn;
		if (sighn == "!") {
			int i = 1;
			break;
		}
		else if (sighn == "+") {
			operation1(num1);
		}
		else if (sighn == "-") {
			operation2(num1);
		}
		else if (sighn == "x" || sighn == "X") {
			operation3(num1);
		}
		else if (sighn == "/") {
			operation4(num1);
		}
	}
	
	return 0;
}
