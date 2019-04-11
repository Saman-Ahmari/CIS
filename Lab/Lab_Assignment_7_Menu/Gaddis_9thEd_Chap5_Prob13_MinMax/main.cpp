/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Saman Ahmari
 * Created on March 31, 2019, 2:07 PM
 * Purpose: Displays Largest/Smallest Numbers Entered
 */

#include <iostream>//I/O Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Set the random number seed
    
    //Declare all Variables Here
    int max, min, num;
 
    //Input or initialize values Here
    max = num;
    min = num;
    cin >> num;
    min = max = num;

    //Process/Calculations Here
    while (num != -99) 
    {
        if (num > max)
        max = num;
    
        if (num < min)
        min = num;
        cin >> num;
}
    //The random number set
    
    //Output
    cout << "Smallest number in the series is " <<min<<endl;
    cout << "Largest  number in the series is " <<max;

    //Exit
    return 0;
}

