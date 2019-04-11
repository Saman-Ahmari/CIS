/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 26, 2019, 8:01 PM
 */

/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 21st, 2019, 10:36 AM
 * Purpose:  Menu Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random functions amoung other things
#include <iomanip>   //Format Librar8y
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int CNVPNDL=100;//Convert Pennies to Dollars

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice,nProbs;
    
    //Initialize or input i.e. set variable values
    nProbs='3';
    do{
        //Present the menu to the user.
        cout<<"Choose from the following Menu"<<endl<<endl;
        cout<<"1 Race"<<endl;
        cout<<"2 Bank Fees"<<endl;
        cout<<"3 Book Worm Points"<<endl;
        cout<<"4 Name Sorting"<<endl;
        cout<<"5 Rock, Paper, Scissors"<<endl;
        cout<<"6 Compatible Signs"<<endl;
        cout<<"7 Roman Numeral Conversion"<<endl;
        cout<<"8 Internet Provider"<<endl;
        cout<<endl;
        cin>>choice;
        cout<<endl;
        //Select the problem to execute
        switch(choice){
            case '1':{
                
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
    
                break;
            }
            case '2':{
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
    
                break;
            }
            case '3':{
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

                break;
            }
            case '4':
            { string name1, name2, name3;
    
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
                break;
            }
            case '5':{
                
    char p1, p2;
    
    
    cout << "Rock Paper Scissors Game"<<endl;
    cout << "Input Player 1 and Player 2 Choices"<<endl;
    cin >> p1 >> p2;
    
    
    
    if (p1 == p2)
    {
        cout << "Nobody wins.";
    }
    if (p1 == 'r' && p2 == 's'|| (p1 == 'R' && p2 == 'S') || (p1 == 'r' && p2 == 'S') || (p1 == 'R' && p2 == 's'))
    {
        cout << "Rock breaks scissors.";
    }
    if (p1 == 'r' && p2 == 'p' || (p1 == 'R' && p2 == 'P') || (p1 == 'r' && p2 == 'P') || (p1 == 'R' && p2 == 'p'))
    {
        cout << "Paper covers rock.";
    }
    if (p1 == 's' && p2 == 'p' || (p1 == 'S' && p2 == 'P') || (p1 == 's' && p2 == 'P') || (p1 == 'S' && p2 == 'p'))
    {
        cout << "Scissors cuts paper.";
    }
    if (p1 == 's' && p2 == 'r' || (p1 == 'S' && p2 == 'R') || (p1 == 's' && p2 == 'R') || (p1 == 'S' && p2 == 'r'))
    {
        cout << "Rock breaks scissors.";
    }
    if (p1 == 'p' && p2 == 's' || (p1 == 'P' && p2 == 'S') || p1 == 'p' && p2 == 'S' || (p1 == 'P' && p2 == 's'))
    {
        cout << "Scissors cuts paper.";
    }
    if (p1 == 'p' && p2 == 'r' || (p1 == 'P' && p2 == 'R') || (p1 == 'p' && p2 == 'R') || (p1 == 'P' && p2 == 'r'))
    {
        cout << "Paper covers rock.";
    }
    
                break;
            }
            case '6':
            {   string sign1, sign2;

    
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
                break;
            }
            
             case '7':
            {    int decimal;  
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
                break;
            }
               case '8':
            {
    char pkg;
    int hours;
    
    
            
    
    cout << "ISP Bill"<<endl;
    cout << "Input Package and Hours"<<endl;
    cin >> pkg >>hours;
    
    if (pkg == 'A' && hours >10)
    {
        cout << "Bill = $ " << (hours-10) * 2.00 + 9.95;
    }
    else if (pkg == 'A' && hours <=10)
    {
        cout << "Bill = $ " << 9.95;
    }
    if (pkg == 'B' && hours >20)
    {
        cout << "Bill = $ " << (hours-20) * 1.00 + 14.95;
    }
    else if (pkg == 'B' && hours <=20)
    {
        cout << "Bill = $ " << 14.95;
    }
     if (pkg == 'C')
    {
        cout << "Bill = $ " << 19.95;
    }
                break;
            }
            
             
            
            
           
            
            
            default:
                cout<<"Exiting Menu"<<endl<<endl;
        }
    }while(choice<=nProbs);

    //Exit stage right or left!
    return 0;
}
