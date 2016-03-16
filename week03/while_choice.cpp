/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   while_choice.cpp
 * Author: k
 *
 * Created on 17 March 2016, 2:56 AM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int x;
    int count = 0; // (1) initialise a counter to 0 to count number of values
    int choice = 1; // This is the choice that controls the looping continuation or termination
    double sum = 0; // initialise the sum to 0 to make sure the sum at the beginning is 0
    double average;
    while (choice == 1) { // (2) read N grades and compute their sum, count ensures N entries
        // read each number and compute the sum:
        cout << "\n Enter a grade <Enter>: ";
        cin >> x;
        sum = sum + x;
        count++; // (3) update the count
        // prompt the user:
        cout << "Do you wish to enter another grade? (1 for yes and 0 or other key for no): "
                << endl;
        cin >> choice;
    }
    if (count == 0)
        cout << "You haven't entered any number, no average will be computed, bye \n";
    else {
        average = sum / count; //Notice that we have divided by count this time
        cout << "The average of these " << count << " grades is " << average << endl;
    }
    return 0;
}

