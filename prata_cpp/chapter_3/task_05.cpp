/*
    Write a program that requests the user to enter the current world population and
    the current population of the U.S. (or of some other nation of your choice). Store
    the information in variables of type long long . Have the program display the per-
    cent that the U.S. (or other nation’s) population is of the world’s population.The
    output should look something like this:
        Enter the world's population: 6898758899
        Enter the population of the US: 310783781
        The population of the US is 4.50492% of the world population.
    You can use the Internet to get more recent figures.
*/

#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter the world's population: ";
    long long population = 0;
    cin >> population;
    cout << "Enter the population of the US: ";
    long long population_in_the_Us = 0;
    cin >> population_in_the_Us;
    double nation_percents = double(population_in_the_Us) / (population / 100);
    cout << "The population of the US is " << nation_percents << "% of the world population.";
}

