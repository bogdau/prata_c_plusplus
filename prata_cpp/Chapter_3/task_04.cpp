/*
    Write a program that asks the user to enter the number of seconds as an integer
    value (use type long , or, if available, long long ) and that then displays the equiva-
    lent time in days, hours, minutes, and seconds. Use symbolic constants to represent
    the number of hours in the day, the number of minutes in an hour, and the number
    of seconds in a minute.The output should look like this:
        Enter the number of seconds: 31600000
        31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/

#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter the numer of seconds: ";
    long long number_of_seconds = 0;
    cin >> number_of_seconds;
    cout << number_of_seconds << " seconds = " << number_of_seconds / (24 * 3600) << " days, "
         << number_of_seconds % (24 * 3600) / 3600 << " hours, " << (number_of_seconds % 3600) / 60
         << " ,minutes " << number_of_seconds % 60;
}

