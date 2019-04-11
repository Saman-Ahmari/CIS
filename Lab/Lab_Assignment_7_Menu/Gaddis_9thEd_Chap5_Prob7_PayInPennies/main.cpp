/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Saman Ahmari
 * Created on March 31, 2019, 1:03 AM
 * Purpose: Calculates Salary of Pennies if Doubled Daily
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <cmath>    //Math Functions
#include <iomanip>  //Manipulation Library
using namespace std; 

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(){
    
    //Set the random number seed
    int dayNum, dayTotal; 

    //Declare all Variables Here
    double pennies_per_day=1, 
            
    //Input or initialize values Here       
    penny_total=0.0; 
    cin >> dayTotal; 

    //Process/Calculations Here
    for (int dayNum = 1; dayNum <= dayTotal; dayNum++) 
    { 
    penny_total+=pennies_per_day; 
    penny_total/100.; 
    pennies_per_day*=2.; 
    } 

    //The random number set
    
    //Output
    cout <<setprecision(2)<<fixed<<penny_total/100;

    //Exit
    return 0; 
}