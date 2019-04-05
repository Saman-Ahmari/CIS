/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 17, 2019, 7:11 PM
 */

#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random functions amoung other things
using namespace std;


int main(int argc, char** argv) {
  
    
    
    
    int decimal;  
    string rmNum; 
    
    
    rmNum="";
    
    cout << "Arabic to Roman numeral conversion." << endl;
    cout << "Input the integer to convert." << endl;
    
    cin >> decimal;
    
    
    if (decimal < 1000 || decimal > 3000)
    {
        cout << decimal <<" is Out of Range!";
    }
    else
    {
        switch(decimal/1000%10){
            case 3:rmNum+='M';
            case 2:rmNum+='M';
            case 1:rmNum+='M';
        }
       
        switch(decimal/100%10){
            case 9:rmNum+="CM";break;
            case 8:rmNum+="DCCC";break;
            case 7:rmNum+="DCC";break;
            case 6:rmNum+="DC";break;
            case 5:rmNum+='D';break;
            case 4:rmNum+="CD";break;
            case 3:rmNum+='C';
            case 2:rmNum+='C';
            case 1:rmNum+='C';
        }
        
        switch(decimal/10%10){
            case 9:rmNum+="XC";break;
            case 8:rmNum+="LXXX";break;
            case 7:rmNum+="LXX";break;
            case 6:rmNum+="LX";break;
            case 5:rmNum+='L';break;
            case 4:rmNum+="XL";break;
            case 3:rmNum+='X';
            case 2:rmNum+='X';
            case 1:rmNum+='X';
        }
        
        switch(decimal%10){
            case 9:rmNum+="IX";break;
            case 8:rmNum+="VIII";break;
            case 7:rmNum+="VII";break;
            case 6:rmNum+="VI";break;
            case 5:rmNum+='V';break;
            case 4:rmNum+="IV";break;
            case 3:rmNum+='I';
            case 2:rmNum+='I';
            case 1:rmNum+='I';
        }
         cout<<decimal<<" is equal to "<<rmNum;
    }
    
    
   

   
    return 0;
}