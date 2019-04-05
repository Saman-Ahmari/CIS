/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on February 25, 2019, 8:52 PM
 */

#include <iostream>
using namespace std;

int main() 
{
    int number_of_pods, peas_per_pod, total_peas;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout<< "Enter number of peas in a pod:\n";
    cin >> peas_per_pod;
    
    total_peas = number_of_pods * peas_per_pod;
    
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods";
    cout << " and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then";
    cout <<" you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    
    return 0;
}
    
       
            


