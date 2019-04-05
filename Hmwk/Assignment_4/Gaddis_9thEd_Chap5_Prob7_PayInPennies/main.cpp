/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 31, 2019, 1:03 AM
 */

#include <iostream> 
#include <cmath> 
#include <iomanip> 
using namespace std; 


int main(){ 

int dayNum, dayTotal; 

double pennies_per_day=1, 
penny_total=0.0; 

cin >> dayTotal; 


for (int dayNum = 1; dayNum <= dayTotal; dayNum++) 
{ 
 
penny_total+=pennies_per_day; 

penny_total/100.; 

pennies_per_day*=2.; 
} 

cout <<setprecision(2)<<fixed<<penny_total/100;

return 0; 
}