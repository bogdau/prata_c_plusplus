/*
    Write a short program that asks for your height in integer inches and then converts
    your height to feet and inches. Have the program use the underscore character to
    indicate where to type the response.Also use a const symbolic constant to repre-
    sent the conversion factor.
*/

#include <iostream>

int main()
{
    using namespace std;
    const int foot = 12;
    cout << "Enter you height in inches: _\b ";
    int inches = 0;
    cin >> inches;
    cout << "You height in inches: " << inches / foot << " Foot and:  " << inches % foot;
}

