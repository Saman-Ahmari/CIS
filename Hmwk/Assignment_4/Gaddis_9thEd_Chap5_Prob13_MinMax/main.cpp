/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 31, 2019, 2:07 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
int max, min, num;
 

cin >> num;
max = num;
min = num;

cin >> num;

min = max = num;
while (num != -99) 
{
    if (num > max)
        max = num;
    
    if (num <min)
        min = num;
    
   cin >> num;
}

cout << "Smallest number in the series is " <<min <<endl;
cout << "Largest number in the series is " << max;



    return 0;
}

