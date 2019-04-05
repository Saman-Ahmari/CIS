/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 7, 2019, 9:28 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main() 
{
   float asin;
   float atan;
   float acos;
   float angle;
   float rad;
   
   
   cout << "Calculate trig functions\n";
   cout << "Input the angle in degrees.\n";
  
   
   cin >> angle;
   
   rad = (angle/180) * 3.14159265;
   
   
   
   asin = sin (rad);
   atan = tan (rad);
   acos = cos (rad);
   
   
  
   cout << "sin" << "(" << angle << ") = " << fixed << setprecision (4) << asin;
   cout << "\n";
   cout << fixed << setprecision (0) << "cos" << "(" << angle << ") = " << fixed << setprecision (4) << acos;
   cout << "\n";
   cout << fixed << setprecision (0) << "tan" << "(" << angle << ") = " << fixed << setprecision (4) << atan;
   
   
  

    return 0;
}

