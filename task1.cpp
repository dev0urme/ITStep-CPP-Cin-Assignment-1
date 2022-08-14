#include <iostream>

using namespace std;
//Учитывая количество кошек, количество съедаемой ими еды и цены ее за килограмм, написать программу, рассчитывающую ее стоимость
//в год, в месяц, и в день в гривне.
//Write a program that calculates the monthly, yearly and daily costs of cat food for a specified number of cats, 
//amount of food consumed and it's price in UAH per kg.
int main()
{
    cout << "How many cats do live at Alex's place?\n";
    int cat;
    cin >> cat;
    cout << "How much grams of cat food do Alex's cat(s) eat per day?\n";
    int grams;
    cin >> grams;
    cout << "How much UAH does 1kg of cat food cost?\n";
    int uah;
    cin >> uah;
    cout << " Alex will spend this much UAH per day: \n";
    cout << (cat * grams * uah) / 1000;
    cout << "\nAlex will spend this much UAH per month: \n";
    cout << (cat * grams * uah * 30) / 1000;
    cout << "\n Alex will spend this much UAH per year :\n";
    cout << (cat * grams * uah * 365) / 1000;
    cout << "\n on average.\n";
}