/*Write a program that asks the user to enter his or her age.The program then
 * shoulddisplay the age in months:*/
#include <iostream>
using namespace std;

int main() {
  cout << "Enter your age: ";
  int age;
  cin >> age;
  cout << "Your age in months is " << age * 12 << endl;
}
