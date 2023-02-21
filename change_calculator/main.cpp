#include <iostream>
using namespace std;
int total;

int main() {
   cout << "Input your total> ";
   cin >> total;
    
    if (total == 0) {
      cout << "No change" << endl;
   }
   
   int dollars = total / 100;
   total = total % 100;
   
   int quarters = total / 25;
   total = total % 25;
   
   int dimes = total / 10;
   total = total % 10;
   
   int nickels = total / 5;
   total = total % 5;
   
   int pennies = total;
   
  
   
   if (dollars > 0) {
      if (dollars > 1){
         cout << dollars << " Dollars" << endl;
      }
      else {
         cout << dollars << " Dollar" << endl;
      }
   }
   if (quarters > 0) {
      if (quarters > 1) {
         cout << quarters << " Quarters" << endl;
      }
      else {
         cout << quarters << " Quarter" << endl;
      }
   }
   if (dimes > 0) {
      if (dimes > 1) {
         cout << dimes << " Dimes" << endl;
      }
      else { 
         cout << dimes << " Dime" << endl;
      }
   }
   if (nickels > 0) {
      if (nickels > 1) {
         cout << nickels << " Nickels" << endl;
      }
      else {
         cout << nickels << " Nickel" << endl;
      }
   }
   if (pennies > 0) {
      if (pennies > 1) {      
         cout << pennies << " Pennies" << endl;
      }
      else {
         cout << pennies << " Penny" << endl;
      }
   }
   
   

   return 0;
}
