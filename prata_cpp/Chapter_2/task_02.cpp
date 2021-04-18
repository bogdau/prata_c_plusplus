/*Write a C++ program that asks for a distance in furlongs and converts it to
 * yards.(One furlong is 220 yards.)*/
#include <iostream>

using namespace std;
int main() {
  cout << "Enter distance in furlongs: ";
  int furlongs;
  cin >> furlongs;
  cout << "In yards: " << furlongs * 200 << endl;
}
