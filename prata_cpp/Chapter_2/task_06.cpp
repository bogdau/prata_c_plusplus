/*Write a program that has main()call a user-defined function that takes a
 * distancein light years as an argument and then returns the distance in
 * astronomical units.The program should request the light year value as input
 * from the user and displaythe result,as shown in the following code:Enter the
 * number of light years: 4.24.2 light years = 265608 astronomical units*/
#include <iostream>
using namespace std;

int astronomical_years(double light_years) { return light_years * 63240; }

int main() {
  cout << "Enter the number of light years: ";
  double light_years;
  cin >> light_years;
  cout << light_years << "Light years = " << astronomical_years(light_years)
       << " astronomical unite";
}
