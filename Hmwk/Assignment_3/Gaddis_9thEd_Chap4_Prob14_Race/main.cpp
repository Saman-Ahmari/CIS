/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 12, 2019, 1:51 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
    int time1,time2,time3;
    string name1, name2, name3, rank;
    
   
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>name1>>time1>>name2>>time2>>name3>>time3;
   
    if ((time1 > time2) && (time1 > time3) && (time2 > time3))
    {
        cout << name3 << "\t" <<setw(3) << time3 << endl;
        cout << name2 << "\t" <<setw(3) << time2 << endl;
        cout << name1 << "\t" <<setw(3) << time1;
    }
    else if ((time2 > time1) && (time2 > time3) && (time1 > time3))
    {
        cout << name3 << "\t" <<setw(3) << time3 << endl;
        cout << name1 << "\t" <<setw(3) << time1 << endl;
        cout << name2 << "\t" <<setw(3) << time2;
    }
    else if ((time2 > time1) && (time2 > time3) && (time3 > time1))
    {
        cout << name1 << "\t" <<setw(3) << time1 << endl;
        cout << name3 << "\t" <<setw(3) << time3 << endl;
        cout << name2 << "\t" <<setw(3) << time2;
    }
     
    else if ((time3 > time1) && (time3 > time2) && (time2 > time1))
    {
        cout << name1 << "\t" <<setw(3) << time1 << endl;
        cout << name2 << "\t" <<setw(3) << time2 << endl;
        cout << name3 << "\t" <<setw(3) << time3;
    }
    else if ((time3 > time1) && (time3 > time2) && (time1 > time2))
    {
        cout << name2 << "\t" <<setw(3) << time2 << endl;
        cout << name1 << "\t" <<setw(3) << time1 << endl;
        cout << name3 << "\t" <<setw(3) << time3;
    }
    else if ((time1 > time2) && (time1 > time3) && (time3 > time1))
    {
        cout << name1 << "\t" <<setw(3) << time2 << endl;
        cout << name3 << "\t" <<setw(3) << time3 << endl;
        cout << name2 << "\t" <<setw(3) << time1;
    }
    
    
  
    return 0;
}
