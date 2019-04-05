/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 7, 2019, 9:16 PM
 */

#include <iostream> 
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    
    //Set the random number seed
    
    float wage;
    float hours;
    float ovrt;
    float pay;
    
    
    cout << "This program calculates the gross paycheck.\n";
    cout << "Input the pay rate in $'s/hr and the number of hours.\n";
    cin >> wage; cin >> hours;
    
    
    pay = wage * hours;
    
    
    if (hours > 40)
    {
        ovrt = (hours - 40) * 2 * wage;
        cout << "Paycheck = $" << fixed << setprecision (2) <<setw(7)<< (40 * wage) + ovrt;
        
       
    }
    
    else
    {
       cout << "Paycheck = $" << fixed << setprecision (2) << setw(7) << pay;
    }
    
    
  
    return 0;
}