#include <iostream>
using namespace std;

main()
{

float coinFruit;
float coinVeg;
int kgFruit;
int kgVeg;
float totalVeg;
float totalFruit;
float total;
float exchangeRate;
float rupees;

cout << "Enter coins of Vegs per kilo: ";
cin >> coinVeg;

cout << "Enter coins of Fruits per kilo: ";
cin >> coinFruit;

cout << "Enter kgs of Fruits: ";
cin >> kgFruit;

cout << "Enter kgs of Vegs: ";
cin >> kgVeg;

exchangeRate = 1.94;
totalVeg = coinVeg * kgVeg;
totalFruit = coinFruit * kgFruit;
total = totalVeg + totalFruit;
rupees = total * exchangeRate;

cout << "Total coins: " << total << endl;
cout << "Total earnings in Rs: " << rupees << endl;
}

