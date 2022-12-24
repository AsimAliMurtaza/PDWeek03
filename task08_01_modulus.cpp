#include <iostream>
using namespace std;

main()
{

int number;
int mod1;
int mod2;
int mod3;
int mod4;
int sum;


cout << "Enter 4 digit number: ";
cin >> number;

mod1 = number % 10;
mod2 = (number / 10) % 10;
mod3 = (number / 100) % 10;
mod4 = (number / 1000) % 10;

sum = mod1 + mod2 + mod3 + mod4;
cout << "Sum is = " << sum << endl;

}

