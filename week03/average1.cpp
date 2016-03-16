/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   average1.cpp
 * Author: k
 *
 * Created on 17 March 2016, 1:46 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main7(int argc, char** argv) {
    int x;
    int count = 0; // (1) initialise a counter to 0 to count number of grades
    double sum = 0; // initialise the sum to 0 to make sure the sum at the beginning is 0
    double average;
    // prompt the user:
    cout << "Enter any number of grades separated by a single space, then press <Enter>: ";
    while (count < 100) { // (2) read six grades and compute their sum, count ensures 6 entries
        // read each number and compute the sum:
        cin >> x;
        sum = sum + x;
        count++; // (3) update the count
    }
    cout << endl;
    average = sum / count; // compute the average, total divided by the number of grades
    cout << "The average is " << average << endl;
    return 0;
}

