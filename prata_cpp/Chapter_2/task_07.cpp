/*Write a program that asks the user to enter an hour value and a minute
 * value.Themain()function should then pass these two values to a type
 * voidfunction that dis-plays the two values in the format shown in the
 * following sample run*/
#include <iostream>
using namespace std;

void time(int hour, int minute) {
  cout << "Time: " << hour << ":" << minute << endl;
}

int main() {
  cout << "Enter the number of hours: ";
  int hour;
  cin >> hour;
  cout << "Enter the number of minutes: ";
  int minute;
  cin >> minute;
  time(hour, minute);
}
