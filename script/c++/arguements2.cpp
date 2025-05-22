// Copyright (c) 2025 Joseph Chierichella | All rights reserved

#include <iostream>
#include <string>

using namespace std;

int users(string username, string password, int id) {
    cout << " user name : " << username << endl;
    cout << " password  : " << password << endl;
    cout << " id        : " << id << endl;
    return 0;
}

int main() {
    string username1;
    cout << " Enter your username : ";
    cin >> username1;
    string password1;
    cout << " Enter your password : ";
    cin >> password1;
    int id1;
    cout << " Enter the id value  : ";
    cin >> id1;
    
    users(username1, password1, id1);
    return 0;
}
