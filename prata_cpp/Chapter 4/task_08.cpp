/*
    Do Programming Exercise 7 but use new to allocate a structure instead of declaring
    a structure variable.Also have the program request the pizza diameter before it
    requests the pizza company name.
*/

#include <iostream>

struct pizzaAnalysis {
    char name[100];
    int diameter;
    int weight;
};

int main()
{
    using namespace std;
    pizzaAnalysis* pizza = new pizzaAnalysis;

    cout << "Diameter: ";
    cin >> pizza->diameter;
    cin.get();

    cout << "Name: ";
    cin.getline(pizza->name, sizeof(pizza->name));

    cout << "Weight: ";
    cin >> pizza->weight;
    cin.get();

    cout << "====Now we have====" << endl;
    cout << "Name: " << pizza->name << endl;
    cout << "Diameter: " << pizza->diameter << endl;
    cout << "Weight: " << pizza->weight << endl;
}
