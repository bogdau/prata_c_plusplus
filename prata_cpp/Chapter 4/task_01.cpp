/*
    Write a C++ program that requests and displays information as shown in the fol-
    lowing example of output:
        What is your first name? Betty Sue
        What is your last name? Yewe
        What letter grade do you deserve? B
        What is your age? 22
        Name: Yewe, Betty Sue
        Grade: C
        Age: 22
*/

#include <iostream>

int main()
{
    using namespace std;

    cout << "What is your first name?";
    char name[20];
    cin.getline(name, 20);

    cout << "What is your last name?";
    char lastName[20];
    cin.getline(lastName, 20);

    cout << "What letter grade do you deserve?";
    char grade;
    cin >> grade;

    cout << "What is your age?";
    int age = 0;
    cin >> age;

    cout << "Name: " << lastName << ", " << name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age;
}
