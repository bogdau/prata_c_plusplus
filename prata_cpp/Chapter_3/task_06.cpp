/*
    Write a program that asks how many miles you have driven and how many gallons
    of gasoline you have used and then reports the miles per gallon your car has gotten.
    Or, if you prefer, the program can request distance in kilometers and petrol in liters
    and then report the result European style, in liters per 100 kilometers.
*/

#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter driven miles: ";
    float miles = 0;
    cin >> miles;
    cout << "How much gallons you used: ";
    float gallons = 0;
    cin >> gallons;
    float miles_per_gallon = miles / gallons;
    cout << "Mile per gallon: " << miles_per_gallon;
}

