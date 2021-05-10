/*
    The CandyBar structure contains three members, as described in Programming
    Exercise 5.Write a program that creates an array of three CandyBar structures, ini-
    tializes them to values of your choice, and then displays the contents of each struc-
    ture.
*/

#include <iostream>

struct CandyBar {
    char brand[100];
    float weight;
    int calories;
};

int main()
{
    using namespace std;
    CandyBar yummy[3] = {
        {"Mocha Mocha", 2.3, 350}, {"Elizabeth", 100, 100}, {"Fancy Bob", 80, 250}};
    cout << "=========Snack=========" << endl;
    cout << yummy[0].brand << endl << yummy[0].weight << endl << yummy[0].calories << endl;

    cout << "=========Cookies=========" << endl;
    cout << yummy[1].brand << endl << yummy[1].weight << endl << yummy[1].calories << endl;

    cout << "=========Chocolate=========" << endl;
    cout << yummy[2].brand << endl << yummy[2].weight << endl << yummy[2].calories << endl;
}
