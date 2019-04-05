/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 24, 2019, 6:42 PM3
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv)

{
    float exc_tax, s_tax, ct_tax, fed_tax, profit, ppg, prof_gal, total_tax;
    
    cout << "Program that calculates the percentage gas tax per gallon and the profit made from a gallon of gas given."<<endl;
    
    
    cout << "Input price per gallon you payed at the gas pump."<<endl;
    cin >> ppg;
    exc_tax = .39, s_tax = ppg * .08, ct_tax = .10, fed_tax = .184;
    prof_gal =(ppg - exc_tax - ct_tax - fed_tax - s_tax) * .065;
    total_tax = (ppg - exc_tax - ct_tax - fed_tax - s_tax);
    cout << "Oil company profit per gallon: $"<<setw(5)<< setprecision(3)<<fixed<<prof_gal<<endl;
    cout << "Oil company profit percentage: " <<setw(5)<< setprecision(2)<<fixed<< (prof_gal / total_tax) * 100 << "%"<<endl;
    cout << "Government profit per gallon:  $" <<setw(5)<< setprecision(3)<<fixed<< ppg - total_tax<<endl;
    cout << "Government profit percentage: "<<setw(6)<< setprecision(2)<<fixed<<((ppg - total_tax) / ppg) *100<< "%";

            
            
            
            
            
    return 0;
}

