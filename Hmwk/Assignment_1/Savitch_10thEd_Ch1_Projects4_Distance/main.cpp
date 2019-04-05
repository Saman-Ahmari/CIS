/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on February 26, 2019, 8:52 PM
 */

#include <iostream>

using namespace std;

int main() 
{
    int distance, acceleration, time;
    
    cout << "Press return after entering a number.\n";
    cout << "\n";
    cout << "Enter a time in seconds.\n";
    cout << "\n";
    cin >> time;
    cout << "second(s).\n";
    cout << "\n";
    
   
    acceleration = 32 * time * time;
    distance = acceleration / 2.0;
    
    cout << "If an object is dropped for ";
    cout << time;
    cout << " second(s)";
    cout << ", then it will fall a distance of ";
    cout << distance;
    cout << " feet.";
    cout << "\n";
            
    
    

    return 0;
}

