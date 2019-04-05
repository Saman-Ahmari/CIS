/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 7, 2019, 9:36 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int poscount = 0;
    int negcount = 0;
    int pos_sum = 0;
    int neg_sum = 0;
    int num;
    cout << "Input 10 numbers, any order, positive or negative\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> num;
       
        if ( num > 0)
        {
            ++poscount;
            pos_sum += num;
        }
        else
        {
            ++ negcount;
            neg_sum += num;
        }
    }
    
    cout << "Negative sum = " << setw(3)<<neg_sum << endl;
    cout << "Positive sum = " << setw(3)<<pos_sum << endl;
    cout << "Total sum    = " <<setw(3)<< pos_sum + neg_sum;
  
    
    return 0;
}