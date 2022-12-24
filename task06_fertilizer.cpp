#include <iostream>
using namespace std;

main()
{

int bagPound;
int bagCost;
int area;
int costPerPound;
int costPerSquare;

cout << "Enter bag size in Pound: ";
cin >> bagPound;

cout << "Enter cost of bag: ";
cin >> bagCost;

cout << "Area covered by each bag in square feet: ";
cin >> area;


costPerPound = bagCost / bagPound;
costPerSquare = bagCost / area;

cout << "Cost of fertilizer per pound: " << costPerPound << endl;
cout << "Cost of fertilizer per square feet: " << costPerSquare << endl;

}