#include <iostream>
using namespace std;
main() 
{

int initialVelocity;
int finalVelocity;
int acceleration;
int time;

cout << "initialVelocity : ";
cin >>initialVelocity;
cout << "finalVelocity : ";
cin >>finalVelocity;
cout << "Acceleration : ";
cin >>acceleration;
cout << "time : ";
cin >>time;

acceleration = (finalVelocity - initialVelocity)/ time;

cout << "acceleration is : "<<acceleration;
}