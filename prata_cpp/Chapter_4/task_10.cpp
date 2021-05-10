/*
    Write a program that requests the user to enter three times for the 40-yd dash (or
    40-meter, if you prefer) and then displays the times and the average. Use an array
    object to hold the data. (Use a built-in array if array is not available.)
*/

#include <iostream>

int main()
{
    using namespace std;
    const int divide = 3;
    int dash[3];

    cout << "Enter first dash for the 40 meter: ";
    cin >> dash[0];

    cout << "Enter second dash for the 40 neter: ";
    cin >> dash[1];

    cout << "Enter third dash for the 40 neter: ";
    cin >> dash[2];

    int avarage = ((dash[0] + dash[1] + dash[2]) / divide);
    cout << "Average dash: " << avarage;
}
