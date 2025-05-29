// Copyright (c) 2025 Joseph Chierichella | All rights reserved

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	std::srand(std::time(0));
	int sNum = std::rand() % 100 + 1;
	int guess;
	int i = 0;
	while (i == 0) {
		using namespace std;
		int i = 0;
		cout << "Enter an integer between 1 and 100 : ";
		cin >> guess;
		if (guess == sNum) {
			cout << "You got it!" << endl;
			int i = 1;
			break;
		}else if (guess > sNum) {
			cout << "Too high!" << endl;
		}else if (guess < sNum) {
			cout << "Too low!" << endl;
		}else {
			cout << "Program will crash" << endl;
			return 1;
		}
	}
	return 0;
}
