/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   numbers.cpp
 * Author: k
 *
 * Created on 16 March 2016, 8:34 PM
 */

#include <cstdlib>
#include <iostream>


using namespace std;

/*
 * 
 */
int main4(int argc, char** argv) {
    int userInput;
    cout << "Please enter an integer: ";
    cin >> userInput;
    
    if (userInput < 0){
        cout << "Negative";    
    }
    
    if (userInput > 0){
        cout << "Positive";
    }
    
    if (userInput == 0){
        cout << "Zero";
    }
    
    return 0;
}

