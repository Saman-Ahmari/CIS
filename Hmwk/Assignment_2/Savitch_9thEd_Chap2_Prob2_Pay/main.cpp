/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 7, 2019, 9:31 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() 

{
    float p_sal;
    float n_a_sal;
    float ret_pay;
    float n_m_sal;
    const float percent = .076;
    
    cout << "Input previous annual salary." << endl;
    cin >> p_sal;
    
    n_a_sal = p_sal + (p_sal * percent);
    ret_pay = (n_a_sal - p_sal) / 2;
    n_m_sal = n_a_sal / 12;
    
    
    cout << "Retroactive pay" << setw(7) << "= $";
    cout  << setw(7) << fixed << setprecision(2)<< ret_pay << endl;
    cout << "New annual salary  = $" << setw(7);
    cout  << setw(7) << fixed << setprecision(2) << n_a_sal << endl;
    cout << "New monthly salary = $ " << setw(7);
    cout  << setw(6) << fixed << setprecision(2) << n_m_sal;
    
    

    

    return 0;
}
