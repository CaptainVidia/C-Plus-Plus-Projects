// Author: George Tang
// Date: 9/4/20
// Program:  Elementary Divsion
// File:  ElementaryDivsion.cpp
// Purpose: Allows the user to enter two numbers. Then the program will divide the two numbers and 
//          giving the user the quotient. The program is user friendly with a welcome and goodbye 
//          message

#include <iostream>
using namespace std;

int main()
{
    //declaring variables
    int num1 = 0, num2 = 0, result = 0, remainder = 0;
    char ch;

    cout << "Welcome to the division practice program.\n "<< endl;
    
    // asks user for the divdend and stores it
    cout << "\nEnter the dividend (the number you're dividing into): "<< endl;
    cin >> num1;

    // asks user for the divisor and stores it
    cout << "\nNow enter the divisor (the number you're using to divide): "<< endl;
    cin >> num2;

    cout << "\nGreat. Now try to work out the answer yourself.\n "<< endl;

    // asks user to enter a single character to continue 
    cout << "\nWhen you're ready for the answer, \ntype any character and press, Enter!\n" << endl;
    cin >> ch;

    // program runs and divides the numbers
    result = num1 / num2;
    remainder = num1 % num2;

    // displays the quotient and remainder, then displays a goodbye message
    cout << num1 << " divided by " << num2 << " equals " << result << " with a remainder of " << remainder << "\n" << endl;
    cout << "Goodbye\n" << endl;
    
}

