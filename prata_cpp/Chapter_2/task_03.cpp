/*Write a C++ program that uses three user-defined functions (counting
 * main()asone) and produces the following output:
 * Three blind mice
 * Three blind mice
 * See how they run
 * See how they run*/
#include <iostream>
using namespace std;

void content() { cout << "Three blind mice" << endl; }
void content2() { cout << "See how they run" << endl; }

int main() {
  content();
  content();
  content2();
  content2();
}
