/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 7, 2019, 9:23 PM
 */

#include <iostream>

using namespace std;

int main() 
{
    float  cookies;
    float calories;
    float serving;
    
    cout << "Calorie Counter\n";
    cout << "How many cookies did you eat?\n";
    cin >> cookies;
    serving = 4;
    
    calories = (300 / serving) * cookies;
    cout << "You consumed "<< calories << " calories.";
    
    
            
    
    

    return 0;
}