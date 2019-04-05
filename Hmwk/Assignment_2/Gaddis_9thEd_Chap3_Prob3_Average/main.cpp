/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 7, 2019, 9:18 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main() 
{
    float test1, test2, test3, test4, test5, average;
    
    cout << "Input 5 numbers to average.\n";
    
    cin >> test1 >> test2 >> test3 >> test4 >> test5;
    average = (test1 + test2 + test3 + test4 + test5) / 5.0;
    cout << "The average = ";
    cout << fixed << setprecision(1) << average;
    

    return 0;
}
