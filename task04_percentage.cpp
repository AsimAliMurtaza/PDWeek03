#include <iostream>
using namespace std;

main()
{
int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
string name;
float percentage;
int obtained;

cout << "Enter name: ";
cin >> name;

cout << "Enter Subject 1 marks: ";
cin >> subject1;

cout << "Enter Subject 2 marks: ";
cin >> subject2;

cout << "Enter Subject 3 marks: ";
cin >> subject3;

cout << "Enter Subject 4 marks: ";
cin >> subject4;

cout << "Enter Subject 5 marks: ";
cin >> subject5;

obtained = subject1 + subject2 + subject3 + subject4 + subject5;

percentage = (obtained * 100) / 500;
cout << "Name = " << endl;
cout << "Percentage = " << percentage << endl;


}