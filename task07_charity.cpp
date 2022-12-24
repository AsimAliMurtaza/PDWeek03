#include <iostream>
using namespace std;

main()
{

string name;
int adultPrice;
int childPrice;
int adultSold;
int childSold;
float percent;
float percentDonate;
float afterDonate;
float totalAmount;
float adultAmount;
float childAmount;

cout << "Name of Movie: ";
cin >> name;

cout << "Enter price of Adult Ticket: ";
cin >> adultPrice;

cout << "Enter price of Child Ticket: ";
cin >> childPrice;

cout << "Adult Tickets sold: ";
cin >> adultSold;

cout << "Child Tickets sold: ";
cin >> childSold;

cout << "Enter percentage to donate: ";
cin >> percentDonate;

adultAmount = adultPrice * adultSold;
childAmount = childPrice * childSold;
totalAmount = adultAmount + childAmount;
percent = (totalAmount * percentDonate) / 100;
afterDonate = totalAmount - percent;

cout << "Total amount = " << totalAmount << endl;
cout << "Total amount after donation = " << afterDonate << endl;

}

