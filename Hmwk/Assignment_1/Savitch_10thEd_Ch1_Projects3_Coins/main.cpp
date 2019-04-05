/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on February 26, 2019, 2:17 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main () 
{
    int number_of_quarters, number_of_dimes, number_of_nickels, total_of_coins;
    
    
    cout<< "Press return after entering a number.\n";
    cout<< "\n";
    cout<< "Enter number of quarters.\n";
    cin>> number_of_quarters;
    cout<< "Enter number of dimes.\n";
    cin>> number_of_dimes;
    cout<< "Enter number of nickels.\n";
    cin>> number_of_nickels;
   
    total_of_coins = (number_of_quarters * 25) + (number_of_dimes * 10) + (number_of_nickels * 05);  
    
    cout<< "If you have ";
    cout<< number_of_quarters;
    cout<< " quarter(s), ";
    cout<< number_of_dimes;
    cout<< " dime(s), and ";
    cout<< number_of_nickels;
    cout<< " nickel(s),";
    cout<< " then your total is ";
    cout<< total_of_coins;
    cout<< " cents.";
    
            
    

    return 0;
}

