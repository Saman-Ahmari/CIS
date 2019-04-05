/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 16, 2019, 12:42 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)

{
    char pkg;
    int hours;
    
    
            
    
    cout << "ISP Bill"<<endl;
    cout << "Input Package and Hours"<<endl;
    cin >> pkg >>hours;
    
    if (pkg == 'A' && hours >10)
    {
        cout << "Bill = $ " << (hours-10) * 2.00 + 9.95;
    }
    else if (pkg == 'A' && hours <=10)
    {
        cout << "Bill = $ " << 9.95;
    }
    if (pkg == 'B' && hours >20)
    {
        cout << "Bill = $ " << (hours-20) * 1.00 + 14.95;
    }
    else if (pkg == 'B' && hours <=20)
    {
        cout << "Bill = $ " << 14.95;
    }
     if (pkg == 'C')
    {
        cout << "Bill = $ " << 19.95;
    }
    
    
            

    return 0;
}

