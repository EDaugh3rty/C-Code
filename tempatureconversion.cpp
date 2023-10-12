#include <iostream>
using namespace std;

int main(){
   double celsius, fahrenheit, kelvin,theTempature;
   string theType;
   
   cout << "What tempature is it?" << endl;
   cin >> theTempature; 
   cout << "Type C for celsius, F for fahrenheit, and K for kelvin." << endl;
   cin >> theType;
   
   string conv[] = {"celsius","kelvin","fahrenheit"};
   string theInput;
   string theInput2;
   string theTemp;
   double temp1,temp2;
   
   if(theType == "C"){
      fahrenheit = (theTempature * 1.8) + 32;
      kelvin = theTempature + 273.15;
      theInput = conv[2];
      theInput2 = conv[1];
      theTemp = conv[0];
      temp1 = fahrenheit;
      temp2 = kelvin;
   }
   else if(theType == "F"){
      celsius = (theTempature - 32) * .55556;
      kelvin = celsius + 273.15;
      theInput = conv[0];
      theInput2 = conv[1];
      theTemp = conv[2];
      temp1 = celsius;
      temp2 = kelvin;
   }
   else{ celsius = theTempature - 273.15;
      fahrenheit = (celsius * 1.8) + 32;
      theInput = conv[0];
      theInput2 = conv[2];
      theTemp = conv[1];
      temp1 = celsius;
      temp2 = fahrenheit;
   }
   
   cout << endl;
   cout << "The " << theTemp << " is equal to " << theTempature << "." << endl;
   cout << "The " << theInput << " is equal to " << temp1 << "." << endl;
   cout << "The " << theInput2 << " is equal to " << temp2 << "." << endl;
   
return 0;
}