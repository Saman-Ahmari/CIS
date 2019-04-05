/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on February 26, 2019, 1:11 AM
 */

#include <iostream>
using namespace std;

int main() 
{
    int first_number, second_number, sum_of_numbers, product_of_numbers;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the first number:\n";
    cin >> first_number;
    cout<< "Enter the second number:\n";
    cin >> second_number;
    
    sum_of_numbers = first_number + second_number;
    
    cout << "The sum of ";
    cout << first_number;
    cout << " and ";
    cout << second_number;
    cout <<" is ";
    cout << sum_of_numbers;
    cout << ".";
    
    product_of_numbers = first_number * second_number;
    
    cout << " The product of ";
    cout << first_number;
    cout << " and ";
    cout << second_number;
    cout << " is ";
    cout << product_of_numbers;
    cout << ".\n";
    
    
    
    return 0;
}