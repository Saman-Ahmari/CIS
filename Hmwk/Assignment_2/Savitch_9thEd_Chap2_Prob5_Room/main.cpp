/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 7, 2019, 9:41 PM
 */

#include <iostream>

using namespace std;

int main() 

{
    int max_cap;
    int num_ppl;
    
    cout << "Input the maximum room capacity and the number of people\n";
    cin >> max_cap >> num_ppl;
    
    if (num_ppl >= max_cap)
    {
    cout << "Meeting cannot be held.\n";
    cout << "Reduce number of people by " << num_ppl - max_cap << " to avoid fire violation.";
    }
    
    else if (num_ppl <= max_cap)
    {    
    cout << "Meeting can be held.\n";
    cout << "Increase number of people by " << max_cap - num_ppl << " will be allowed without violation.";
    }
    

    return 0;
}
