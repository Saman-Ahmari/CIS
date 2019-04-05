/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 15, 2019, 7:51 PM
 */

#include <iostream> 
#include <string>

using namespace std;

int main(int argc, char** argv) 
{
    string sign1, sign2;

    
    cout << "Horoscope Program which examines compatible signs."<<endl;
    cout << "Input 2 signs."<<endl;
    cin >> sign1 >> sign2;
   
    
    if ((sign1 == "Leo"||sign1 == "Sagittarius"||sign1 == "Aries")&&(sign2 == "Leo"||sign2 == "Sagittarius"||sign2 == "Aries"))
    {
        cout<< sign1 <<" and "<< sign2 <<" are compatible Fire signs.";
    }
    else if ((sign1 == "Leo"||sign1 == "Sagittarius"||sign1 == "Aries")&&(sign2 != "Leo"||sign2 != "Sagittarius"||sign2 != "Aries"))
    {
        cout<< sign1 <<" and "<< sign2 <<" are not compatible signs.";
    }
    if ((sign1 == "Taurus"||sign1 == "Virgo"||sign1 == "Capricorn")&&(sign2 == "Taurus"||sign2 == "Virgo"||sign2 == "Capricorn"))
    {
        cout<< sign1 <<" and "<< sign2 <<" are compatible Earth signs.";
    }
    else if ((sign1 == "Taurus"||sign1 == "Virgo"||sign1 == "Capricorn")&&(sign2 != "Taurus"||sign2 != "Virgo"||sign2 != "Capricorn"))
    {
        cout<< sign1 <<" and "<< sign2 <<" are not compatible signs.";
    }
    if ((sign1 == "Gemini"||sign1 == "Libra"||sign1 == "Aquarius")&&(sign2 == "Gemini"||sign2 == "Libra"||sign2 == "Aquarius"))
    {
        cout<< sign1 <<" and "<< sign2 <<" are compatible Air signs.";
    }
    else if ((sign1 == "Gemini"||sign1 == "Libra"||sign1 == "Aquarius") && (sign2 != "Gemini"||sign2 != "Libra"||sign2 != "Aquarius"))
    {
        cout<< sign1<<" and "<< sign2<<" are not compatible signs.";
    }
    if ((sign1 == "Cancer"||sign1 == "Scorpio"||sign1 == "Pisces")&&(sign2 == "Cancer"||sign2 == "Scorpio"||sign2 == "Pisces"))
    {
        cout<< sign1 <<" and "<< sign2 << " are compatible Water signs.";
    }
    else if ((sign1 == "Cancer"||sign1 == "Scorpio"||sign1 == "Pisces") && (sign2 != "Cancer"||sign2 != "Scorpio"||sign2 != "Pisces"))
    {
         cout<< sign1 <<" and "<< sign2 <<" are not compatible signs.";
    }
    

    return 0;
}