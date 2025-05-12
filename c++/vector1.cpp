// Copyright (c) 2025 Joseph Chierichella | All rights reserved


#include <iostream>
#include <vector>

using namespace std;

int first() {
	vector<int> v1 = {1, 2, 3};

	cout << v1[1] << endl;        // output : 2

	cout << v1.front() << endl;   // output : 1

	cout << v1.back() << endl;    // output : 3

	cout << v1.size() << endl;    // output : 3

	v1.push_back(9);

	return 0;
}

int main() {
	first();
	return 0;
}

