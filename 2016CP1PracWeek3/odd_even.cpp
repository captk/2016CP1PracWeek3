/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   odd_even.cpp
 * Author: k
 *
 * Created on 16 March 2016, 8:42 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int userInput, remainder;
    
    cout << "Please enter your integer: ";
    cin >> userInput;
    
    remainder = userInput%2;
    //cout << remainder;
    
    if (remainder == 0){
        cout << "Number is even";
    }
    else {
        cout << "Number is odd";
    }
    cout << endl << "something";
    
    return 0;
}

