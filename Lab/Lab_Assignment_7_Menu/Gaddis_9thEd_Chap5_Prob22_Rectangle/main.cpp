/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 * Created on March 27, 2019, 4:56 PM
 * Purpose: Create Rectangle
 */

//System Libraries Here
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
    int number, j, i;
    char letter;
    
    //Input or initialize values Here
    cin >>number>>letter;
    
    //Process/Calculations Here
    for (int j= 0; j <number; ++j)
    {
        for (int i= 0; i<number; ++i)
        {
            cout << letter;
            
        }
    
    if (j != (number-1)) 
    {
        cout << endl;
    }
    }
    
    //The random number set
    
    //Exit
    return 0;
}


