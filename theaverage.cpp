#include <iostream>

using namespace std;

int main() {
   double num1,num2,num3,num4,num5,theSum;
  
   double theAverage;
   
   cout << "please enter your first integer" << endl;
   cin >> num1;
   
   cout << "please enter your second integer" << endl;
   cin >> num2;
   
   cout << "please enter your third integer" << endl;
   cin >> num3;
   
   
   cout << "please enter your fourth integer" << endl;
   cin >> num4;
   
   
   cout << "please enter your fifth integer" << endl;
   cin >> num5;
   
   theSum = num1 + num2 + num3 + num4 + num5;
   
   theAverage = theSum/5.0;
   
   cout << "the average is" << " " << theAverage << ".\n";
   
return 0;
}