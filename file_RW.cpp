//Ethan Daugherty
//Assignment 5
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
   ifstream inputFile;
   ofstream outputFile;
   inputFile.open("empInfo.txt");
   
   outputFile.open("empCheckInfo.txt");
   double payment[25][2];
   double grosspay[25];
   double netpay[25];
   double incometax, socsectax;
   string employee[25][2];
   int r = 0;


   while(!inputFile.eof()){  // Assigns variables to arrays
      for(int c = 0; c < 2; c++){
         inputFile >> employee[r][c];
      }
      for(int c = 0; c < 2; c++){
         inputFile >> payment[r][c];
      }
      r++;
   
   }
   for(int n = 0; n < r; n++){
      grosspay[n] = payment[n][0] * payment[n][1];
      incometax = grosspay[n] * .075;
      socsectax = grosspay[n] * .06;
      netpay[n] = grosspay[n] - incometax - socsectax; //Subtract taxes: income - 7.5%, ss - 6%

   }
   for(int n = 0; n < r; n++){ // sets the output file up
      outputFile << employee[n][0] << "   " << employee[n][1] << "   " << fixed << setprecision(2) << netpay[n] << endl;  
   }
   cout << "Last Name     First Name     Net Pay" << endl;
   for(int n = 0; n < r; n++){ // displays the calculations of the program
      cout << "-------------------------------" << endl;
      cout << employee[n][1] << "     " << employee[n][0] << "         " << fixed << setprecision(2) << "$" << netpay[n] << endl;  
   }
   cout << endl;
   cout << "Program completed. The output file name is empCheckInfo.txt" << endl; // tells user the program is complete and the output file name
   inputFile.close();
   outputFile.close();

return 0;
}