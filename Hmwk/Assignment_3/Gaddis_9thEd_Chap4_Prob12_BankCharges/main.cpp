/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 14, 2019, 8:22 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;


int main() 

{
    float balance, fees, m_fee, lb_fee, n_bal;
    int checks;
    
    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    cin >> balance >> checks;
    if (balance < .01)
    {
       cout << "URGENT: The Account is Overdrawn" <<endl; 
    }
    
    cout << "Balance     $" << setw(9) << setprecision(2) << fixed << balance << endl;
    
    m_fee = 10.00;
    
    if (checks <20)
    {
       fees = checks * .20;
       cout << "Check Fee   $" << setw(9)<< setprecision(2) << fixed << fees << endl;
    }
    if (checks>19 && checks <40)
    {
      fees = checks * .08;
      cout << "Check Fee   $" << setw(9)<< setprecision(2) << fixed << fees << endl;
    }
    if (checks>39 && checks<60)
    {
      fees = checks * .06;
      cout << "Check Fee   $" << setw(9)<< setprecision(2) << fixed << fees << endl;
    }
    if (checks >= 60)
    {
        fees = checks * .04;
        cout << "Check Fee   $" << setw(9)<< setprecision(2) << fixed << fees << endl;
    }
    cout << "Monthly Fee $" << setw(9)<< setprecision(2) << fixed << m_fee << endl;
    if (balance < 400.00)
    {
        lb_fee = 15.00;
        cout << "Low Balance $" << setw(9)<< setprecision(2) << fixed << lb_fee << endl;
    }
    else if (balance >= 400)
    {
        lb_fee = 0.00;
        cout << "Low Balance $" << setw(9)<< setprecision(2) << fixed << lb_fee << endl;
    }
    
    n_bal = balance - lb_fee - m_fee - fees;
    
    cout << "New Balance $" << setw(9)<< setprecision(2) << fixed << n_bal;
    
   
    
    
    
    
 
    return 0;
    
}