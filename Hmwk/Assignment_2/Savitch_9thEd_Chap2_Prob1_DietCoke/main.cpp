/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 7, 2019, 9:29 PM
 */

#include <iostream>


using namespace std;

int main() 
{
    
    const float percent = .001;
    int amount_of_sweet;
    float weight_of_dieter;
    float total_weight;
     
    cout << "Program to calculate the limit of Soda Pop Consumption.\n";
    cout << "Input the desired dieters weight in lbs.\n";
    cin >> weight_of_dieter;
    
    total_weight =  453.592 * weight_of_dieter;
    amount_of_sweet = (0.14285714285 * total_weight) / percent / 350;
   
    
    cout << "The maximum number of soda pop cans\n";
    cout << "which can be consumed is " << amount_of_sweet << " cans";
    
 
    

    return 0;
}