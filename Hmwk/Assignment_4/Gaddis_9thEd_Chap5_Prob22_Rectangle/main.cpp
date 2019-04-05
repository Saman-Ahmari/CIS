/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 27, 2019, 4:56 PM
 */

 #include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    int number, j, i;
    char letter;
    
    cin >>number>>letter;
    
    for (int j= 0; j <number; ++j)
    {
        for (int i= 0; i<number; ++i)
        {
            cout << letter;
            
        }
    
    if (j != (number-1)) 
    {
        cout << endl;
    }
    }
    

    return 0;
}


