/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 7, 2019, 9:25 PM
 */

#include <iostream>

using namespace std;
\
int main() 
{
    int price, insur;
    
    cout << "Insurance Calculator\n";
    cout << "How much is your house worth?\n";
    cin >> price;
    
    insur = (price * .80);
    
    cout << "You need $" << insur << " of insurance.";
    

    return 0;
}