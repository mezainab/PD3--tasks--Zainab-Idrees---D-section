#include <iostream>
using namespace std;
main() {
int fourDigit;
int threeDigit;
int twoDigit;
int oneDigit;
int number1;
int number2;
int number3;
int total;

cout << "Enter your four digit number: ";
cin >>fourDigit;

number1 = fourDigit%10;
threeDigit = fourDigit/10;
number2 = threeDigit%10;
twoDigit = threeDigit/10;
number3 = twoDigit%10;
oneDigit = twoDigit/10;


total = number1 + number2 + number3 + oneDigit;

cout << "Total: " <<total; 

}