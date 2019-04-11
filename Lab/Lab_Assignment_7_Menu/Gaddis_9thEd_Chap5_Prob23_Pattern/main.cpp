/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Saman Ahmari
 * Created on March 31, 2019, 1:32 PM
 * Purpose: Display Triangle Pattern
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
    
    //Declare all Variables Here
    int number;
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    cin >> number;
    for (int i=1; i <= number; ++i)
    {
        for (int j=1; j<= i; ++j)
        {
            cout << "+";
        }
        cout << endl<<endl;
    }
    for (int k=number;  k>= 1; --k)
    {
        for (int l=1; l<=k; ++l)
        {
            cout << "+";
        }
        if (k != 1) {
            cout << endl<<endl;
        }
    }
    
    //The random number set

    //Exit
    return 0;
}

