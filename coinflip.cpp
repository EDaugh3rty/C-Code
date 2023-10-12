#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
   int max;
   int flip;
   string theflip,theAnswer, theChoice;
   
   cout << "Enter flip to flip a coin." << endl;
   cin >> theflip;
   theflip = "flip";
   
  do {  
   max = 3; 
   srand(time(0));
   flip = rand()%max;
   cout << "Heads or Tails?" << endl;
   cin >> theChoice; 
   if(flip == 2){
      cout << "The coin landed on heads." << endl;
      if(theChoice == "Heads" || theChoice == "heads"){
         cout << "You Win!!" << endl;
      }
      else{
         cout << "You Lost!!" << endl;
      }
   }
   else{ 
      cout << "The coin landed on tails." << endl;
      if(theChoice == "Tails" || theChoice == "tails"){
         cout << "You Win!!" << endl;
      }
      else{
         cout << "You Lost!!" << endl;
      }
   }
   cout << "Would you like to flip again?" << "  Y or N" << endl;
   cin >> theAnswer;
   }while(theAnswer ==  "y" || theAnswer == "Y");

return 0;
}