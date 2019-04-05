/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: samanahmari
 *
 * Created on March 15, 2019, 12:44 AM
 */

#include <iostream> 

using namespace std;

int main(int argc, char** argv) 
{
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
    
   
    
    
    return 0;
}