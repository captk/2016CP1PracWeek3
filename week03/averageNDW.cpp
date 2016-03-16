/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   averageNDW.cpp
 * Author: k
 *
 * Created on 17 March 2016, 1:56 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double x;
    int count = 0; // (1) initialise a counter to 0 to count number of values
    int N; // Number of values for which the average must be computed.
    double sum = 0; // initialise the sum to 0 to make sure the sum at the beginning is 0
    double average;
    // prompt the user:
    cout << "Enter number of values, N, to be read in <Enter>:" << endl;
    cin >> N;
    if (N == 0) {//Needs to be here to stop people being assholes
        cout << "You have entered 0 numbers, no average will be computed, bye \n";
        return 0;//stop running the program here, otherwise do while loop begins
    }
    do { // (2) read N grades and compute their sum, count ensures N entries
        // read each number and compute the sum:
        cout << "\n Enter a grade <Enter>: ";
        cin >> x;
        sum = sum + x;
        count++; // (3) update the count
    } while (count < N);


    average = average = sum / N;
    cout << "The average of these " << N << " grades is " << average << endl;
    return 0;
}


