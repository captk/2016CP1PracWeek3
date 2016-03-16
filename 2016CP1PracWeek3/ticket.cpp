/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ticket.cpp
 * Author: k
 *
 * Created on 16 March 2016, 6:38 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double age, ticket = 12;
    
    cout << "Please enter the age \n";
    cin >> age;
    if (age <= 8 || age >= 65)
        ticket = 6;
    cout << "Your ticket costs " << ticket << endl;
    
    return 0;
}

