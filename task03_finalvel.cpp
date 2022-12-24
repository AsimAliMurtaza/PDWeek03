#include <iostream>
using namespace std;

main()
{

int acceleration;
int initVelocity;
int finVelocity;
int time;

cout << "Enter Acceleration: ";
cin >> acceleration;

cout << "Enter initial velocity: ";
cin >> initVelocity;

cout << "Enter time: ";
cin >> time;

finVelocity = (acceleration * time) + initVelocity;

cout << "Final velocity is = " << finVelocity << endl;

}