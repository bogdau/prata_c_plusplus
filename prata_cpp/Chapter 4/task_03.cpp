/*
    Write a program that asks the user to enter his or her first name and then last
    name, and that then constructs, stores, and displays a third string, consisting of the
    user’s last name followed by a comma, a space, and first name. Use char arrays and
    functions from the cstring header file.A sample run could look like this:
        Enter your first name: Flip
        Enter your last name: Fleming
        Here’s the information in a single string: Fleming, Flip
*/

#include <cstring>
#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter your first name: ";
    char firstName[50];
    cin.getline(firstName, 50);

    cout << "Enter your last name: ";
    char lastName[50];
    cin.getline(lastName, 50);

    char* coma = " ,";
    char concatenate[strlen(firstName) + strlen(lastName) + strlen(coma)];
    // strcat(strcat(strcpy(concatenate, lastName), coma), firstName);
    strcpy(concatenate, lastName);
    strcat(concatenate, coma);
    strcat(concatenate, firstName);
    cout << "Here all information: " << concatenate;
}
