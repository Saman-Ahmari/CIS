/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 7, 2019, 9:26 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() 
{
    float cel;
    float far;
    
    cout << "Temperature Converter\n";
    cout << "Input Degrees Fahrenheit\n";
   
    cin >> far;
    cel = (far - 32) * 5 / 9;
    
    cout << fixed << setprecision (1) << far << " Degrees Fahrenheit = " << fixed << setprecision (1) << cel << " Degrees Centigrade";
    
    
    

    return 0;
}