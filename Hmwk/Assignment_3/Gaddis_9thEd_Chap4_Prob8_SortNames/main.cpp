/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 14, 2019, 10:10 PM
 */

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string name1, name2, name3;
    
    cout << "Sorting Names" << endl; 
    cout << "Input 3 names" << endl;
    cin >> name1 >> name2 >> name3;
    
    if ((name1<name2)&&(name1<name3)&&(name2<name3))
    {
        cout << name1<<endl<<name2<<endl<<name3;
    }
    if ((name1<name2)&&(name1<name3)&&(name3<name2))
    {
        cout << name1<<endl<<name3<<endl<<name2;
    }
     if ((name3<name2)&&(name3<name1)&&(name1<name2))
    {
        cout << name3<<endl<<name1<<endl<<name2;
    }
     if ((name3<name2)&&(name3<name1)&&(name2<name1))
    {
        cout << name3<<endl<<name2<<endl<<name1;
    }
     if ((name2<name3)&&(name2<name1)&&(name1<name3))
    {
        cout << name2<<endl<<name1<<endl<<name3;
    }
     if ((name2<name3)&&(name2<name1)&&(name3<name1))
    {
        cout << name2<<endl<<name3<<endl<<name1;
    }

    return 0;
}

