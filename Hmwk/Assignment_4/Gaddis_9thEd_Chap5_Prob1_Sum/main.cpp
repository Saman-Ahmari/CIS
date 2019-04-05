/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 31, 2019, 1:24 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    int number, sum;
    sum = 0;
    cin >> number;
    for (int i=1; i<=number; i++)
    {
        sum += i;
    }
    cout << "Sum = "<< sum;

    return 0;
}

