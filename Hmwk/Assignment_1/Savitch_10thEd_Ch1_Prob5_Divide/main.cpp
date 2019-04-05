/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on February 26, 2019, 12:27 AM
 */

#include <iostream>
using namespace std;

int main() 
{
    int first_number, second_number, sum_of_numbers;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the first number:\n";
    cin >> first_number;
    cout << "Enter the second number:\n";
    cin >> second_number;
    
    sum_of_numbers = first_number / second_number;
            
    cout<< "The quotient of ";
    cout << first_number;
    cout << " and ";
    cout << second_number;
    cout << " is ";
    cout << sum_of_numbers;
    cout << ".";
    
    return 0;
}

