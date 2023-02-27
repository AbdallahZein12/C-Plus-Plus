#include <iostream>
#include <string>
using namespace std;

int main() {
   char char_input;
   string str_input;
   int count = 0;
   int sum = 0;
   
   cin >> char_input;
   getline(cin, str_input);
   
   int length = str_input.length();
   
   while (true) {
      if (count == length){
         break;
      }
      
      if (str_input.at(count) == char_input) {
         sum += 1;
      }
      count += 1;      
   }
   
   if (sum == 1) {
      cout << sum << " " << char_input << endl;
   }
   else { 
      cout << sum << " " << char_input << "'s" << endl;
   }



   

   return 0;
}