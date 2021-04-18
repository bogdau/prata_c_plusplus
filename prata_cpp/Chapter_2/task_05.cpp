/*Write a program that has main()call a user-defined function that takes a
 * Celsiustemperature value as an argument and then returns the equivalent
 * Fahrenheit value.The program should request the Celsius value as input from
 * the user and displaythe result,as shown in the following code:Please enter a
 * Celsius value: 2020 degrees Celsius is 68 degrees Fahrenheit.*/
#include <iostream>
using namespace std;

int find(float cel) {
  float farenheit;
  farenheit = 1.8 * cel + 32.0;
  return farenheit;
}

int main() {
  cout << "Please enter a Celsius value: ";
  float celsius;
  cin >> celsius;
  cout << celsius << " degrees Celsius is " << find(celsius)
       << " degrees Fahrenheit";
}
