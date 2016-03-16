/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bmi.cpp
 * Author: k
 *
 * Created on 17 March 2016, 12:49 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

double weight, height;
/*
 * 
 */
int main6(int argc, char** argv) {
    //Prompt the user to enter their weight in kilograms
    cout << "Enter weight in kilograms:  ";
    cin >> weight;
    //Prompt the user to enter height in metres
    cout << "Enter height in metres:  ";
    cin >> height;
    //Calculate BMI
    double bmi = weight / (height * height);
    //Display result
    cout << "Your BMI is ";
    //Add your code here
    if(bmi < 18.5){
        cout << bmi << ", which means you are in the Underweight range"
                << endl;
    }
    else if(bmi < 24.9){
        cout << bmi << ", which means you are in the Normal range" << endl;
    }
    else if(bmi < 29.9){
        cout << bmi << ", which means you are in the Overweight range"
                << endl;
    }
    else {
        cout << bmi << ", which means you are in the Obese range"
                << endl;
    }
    return 0;
}

