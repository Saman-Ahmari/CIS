/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 31, 2019, 1:32 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 

{
    int number;
    cin >> number;
    for (int i=1; i <= number; ++i)
    {
        for (int j=1; j<= i; ++j)
        {
            cout << "+";
        }
        cout << endl<<endl;
    }
    for (int k=number;  k>= 1; --k)
    {
        for (int l=1; l<=k; ++l)
        {
            cout << "+";
        }
        if (k != 1) {
            cout << endl<<endl;
        }
    }

    return 0;
}

