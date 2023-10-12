#include <iostream>

using namespace std;

double avg(double nums[], int len){
   
   double theSum = 0;
   for(int index = 0; index < len; index++){
      theSum = theSum + nums[index];
   }
   return theSum/len;
}

int main(){
   
   double number;
   
  int len; 
  cout << "How many numbers do you want to average?" << endl;
  cin >> len;
  
   double nums[len]; 
  
   for(int index = 0; index < len; index++){
      cout << "Please enter number " << index << "." << endl;
      cin >> nums[index];
   }
   number = avg(nums,len);
   cout << "The average is " << number << endl;
   
return 0;
}

