/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Saman Ahmari
 * Created on March 31, 2019, 1:24 PM
 * Purpose: Find sum of integers up to input by using loop
 */

//System Libraries Here
#include <iostream> //I/O Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Set the random number seed
    
    //Declare Variables Here
    int number, sum;
    
    //Input or Initialize Values Here
    sum = 0;
    cin >> number;
    
    //Process/Calculations Here
    for (int i=1; i<=number; i++)
    {
        sum += i;
    }
    
    //The random number set
    
    //Output
    cout << "Sum = "<< sum;

    
    //Exit
    return 0;
}

