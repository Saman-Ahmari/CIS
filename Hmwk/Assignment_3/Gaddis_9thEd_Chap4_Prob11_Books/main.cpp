/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 14, 2019, 9:36 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main() 
{
    int num_book, points;
    
    cout << "Book Worm Points" << endl;
    cout << "Input the number of books purchased this month." << endl;
    cin >> num_book;
    cout << "Books purchased" <<setw(2)<<"=" << setw(3)<< num_book << endl;
    
    if (num_book == 0)
    {
        points = 0;
    }
    if (num_book == 1)
    {
        points = 5;
    }
    if (num_book == 2)
    {
        points = 15;
    }
    if (num_book == 3)
    {
        points = 30;
    }
    if (num_book >= 4)
    {
        points = 60;
    }
    
    cout << "Points earned" <<setw(4) << "=" <<setw(3)<< points;

    return 0;
}

