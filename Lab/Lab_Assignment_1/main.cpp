/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on February 28, 2019, 12:02 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() 
{
    float milBdgt,fedBdgt,mlPrcnt;
    
    milBdgt= 7.0e11f;
    fedBdgt= 4.1e12f;
    mlPrcnt= milBdgt / fedBdgt;
    
    cout << "The military budget is ";
    cout << mlPrcnt * 100;
    cout << "%";
    cout << " of the federal budget.";
    cout << "\n";
    
    

    return 0;
}

