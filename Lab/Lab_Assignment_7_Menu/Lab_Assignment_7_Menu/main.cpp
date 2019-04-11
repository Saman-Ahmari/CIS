/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on April 10, 2019, 5:40 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    char choice,nProbs;
    
    //Initialize or input i.e. set variable values
    nProbs='5';
    do{
        //Present the menu to the user.
        cout<<"Choose from the following Menu"<<endl<<endl;
        cout<<"1 Rectangle"<<endl;
        cout<<"2 Min/Max"<<endl;
        cout<<"3 Pay in Pennies"<<endl;
        cout<<"4 Sum of Integers"<<endl;
        cout<<"5 Pattern"<<endl;
        cout<<endl;
        cin>>choice;
        cout<<endl;
        
        //Select the problem to execute
        switch(choice){
            case '1':{
                //Declare all Variables Here
                int number, j, i;
                char letter;
    
                //Input or initialize values Here
                cin >>number>>letter;
    
                //Process/Calculations Here
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
                cout <<endl<<endl;
                break;
            }
            case '2':{
                //Declare all Variables Here
                int max, min, num;
 
                //Input or initialize values Here
                max = num;
                min = num;
                cin >> num;
                min = max = num;

                //Process/Calculations Here
                while (num != -99) 
                {
                    if (num > max)
                    max = num;
    
                    if (num < min)
                    min = num;
                    cin >> num;
                }
               
                //Output
                cout << "Smallest number in the series is " <<min<<endl;
                cout << "Largest  number in the series is " <<max;
                cout <<endl<<endl;
                break;
            }
            case '3':{
                //Declare Variables Here
                int dayNum, dayTotal; 

                //Declare all Variables Here
                double pennies_per_day=1, 
            
                //Input or initialize values Here       
                penny_total=0.0; 
                cin >> dayTotal; 

                //Process/Calculations Here
                for (int dayNum = 1; dayNum <= dayTotal; dayNum++) 
                { 
                penny_total+=pennies_per_day; 
                penny_total/100.; 
                pennies_per_day*=2.; 
                } 

                //Output
                cout <<setprecision(2)<<fixed<<penny_total/100;
                cout <<endl<<endl;
                break;
            }
            case '4':{
                //Declare Variables Here
                int number, sum;
    
                //Input or Initialize Values Here
                sum = 0;
                cin >> number;
    
                //Process/Calculations Here
                for (int i=1; i<=number; i++)
                {
                    sum += i;
                }
    
                //Output
                cout << "Sum = "<< sum;
                cout <<endl<<endl;
                break;
            }
            case '5':{
                //Declare all Variables Here
                int number;
    
                //Input or initialize values Here
    
                //Process/Calculations Here
                cin >> number;
                for (int i=1; i <= number; ++i)
                {
                for (int j=1; j<= i; ++j)
                    {
                        cout << "+";
                    }
                    cout << endl<<endl;
                }
                for (int k=number;  k>= 1; --k)
                {
                    for (int l=1; l<=k; ++l)
                    {
                        cout << "+";
                    }
                    if (k != 1) {
                        cout << endl<<endl;
                    }
                }
                cout <<endl<<endl;
                break;
            }
            
            default:
                cout<<"Exiting Menu"<<endl<<endl;
        }
    }while(choice<=nProbs);

    //Exit stage right or left!
    return 0;
}


