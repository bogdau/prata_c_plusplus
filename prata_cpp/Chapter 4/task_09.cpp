/*
    Do Programming Exercise 6, but instead of declaring an array of three CandyBar
    structures, use new to allocate the array dynamically.
*/

#include <cstring>
#include <iostream>

struct CandyBar {
    char brand[100];
    float weight;
    int calories;
};

int main()
{
    using namespace std;
    CandyBar* yummy = new CandyBar;
    //{"Mocha Mocha", 2.3, 350}, {"Elizabeth", 100, 100}, {"Fancy Bob", 80, 250}};

    strncpy(yummy->brand, "Mocha Mocha", sizeof(yummy->brand));
    yummy->weight = 2.3;
    yummy->calories = 350;
    cout << "=========Snack=========" << endl;
    cout << yummy[0].brand << endl << yummy[0].weight << endl << yummy[0].calories << endl;

    strncpy(yummy[1].brand, "Elizabeth", sizeof(yummy->brand));
    yummy[1].weight = 100;
    yummy[1].calories = 100;
    cout << "=========Cookies=========" << endl;
    cout << yummy[1].brand << endl << yummy[1].weight << endl << yummy[1].calories << endl;

    strncpy(yummy[2].brand, "Fancy Bob", sizeof(yummy->brand));
    yummy[2].weight = 80;
    yummy[2].calories = 250;
    cout << "=========Chocolate=========" << endl;
    cout << yummy[2].brand << endl << yummy[2].weight << endl << yummy[2].calories << endl;
}
