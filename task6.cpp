#include <iostream>
using namespace std;
main() 
{
float bagSizeInPounds;
float costOfBag;
float costPerPound;
float areaCoveredInSF;
float costOfFerPerPound;
float costOfFerTheAreaPerSF;

cout << "Enter bag size in pounds: ";
cin >>bagSizeInPounds;
cout << "cost: ";
cin >>costOfBag;
cout << "Area covered in Square Feet: ";
cin >>areaCoveredInSF;

costPerPound = costOfBag/bagSizeInPounds;
costOfFerTheAreaPerSF = costOfBag/areaCoveredInSF;

cout << "Cost of fertilizer per pound: " << costPerPound <<endl;
cout << "Cost of fertilizing the area per square feet: " << costOfFerTheAreaPerSF;


}


