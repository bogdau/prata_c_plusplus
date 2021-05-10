/*
    Write a program that asks the user to enter a latitude in degrees, minutes, and sec-
    onds and that then displays the latitude in decimal format.There are 60 seconds of
    arc to a minute and 60 minutes of arc to a degree; represent these values with sym-
    bolic constants.You should use a separate variable for each input value.A sample
    run should look like this:
         Enter a latitude in degrees, minutes, and seconds:
        First, enter the degrees: 37
        Next, enter the minutes of arc: 51
        Finally, enter the seconds of arc: 19
        37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/

#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter latitude in degrees, minutes and seconds" << endl;
    cout << "First, enter the degrees: ";
    int degrees = 0;
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    int minutes;
    cin >> minutes = 0;
    cout << "Finally, enter the seconds of arc: ";
    int seconds = 0;
    cin >> seconds;
    const int Sec_Arc = 60;
    const int Min_Arc = 60;
    double result_degrees = (((double(seconds) / Sec_Arc) + minutes) / Min_Arc) + degrees;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds
         << ", seconds = " << result_degrees;
}

