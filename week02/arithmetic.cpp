/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arithmetic.cpp
 * Author: k
 *
 * Created on 7 March 2016, 12:59 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double x;
    int choice;
    cout << "Please input a number for x: ";
    cin >> x;
    cout << endl;
    cout << "What do you want to do with x?" << endl;
    cout << "1. x -= 4*5" << endl;
    cout << "2. x %= 16/2" << endl;
    cout << "3. x /= 82%4" << endl;
    cout << "Please select a number: ";
    cin >> choice;
    cout << endl;

    if (choice == 1) {
        x -= 4 * 5;
    }
    else if (choice == 2) {
        x %= (16 / 2);
    }
    else if (choice == 3) {
        x /= 82%4;
    }
    else {
        x = 0;
    }
    cout << "x: " << x;

    return 0;
}

