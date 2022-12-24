#include <iostream>
using namespace std;
main() 
{
float vegetableP;
float fruitP;
float totalVege;
float totalFruit;
float total;
float totalInRupee;

cout << "Vegetable price per kg: ";
cin >>vegetableP;
cout << "Fruit price per kg: ";
cin >>fruitP;
cout << "Total kgs of vegetables: ";
cin >>totalVege;
cout << "Total kgs of fruits: ";
cin >>totalFruit;

total = vegetableP*totalVege + fruitP*totalFruit;
totalInRupee = total*(1/1.94);

cout << "Earnings of all fruits and vegetables in Rps" <<totalInRupee;

}
