#include <iostream>
using namespace std;

int main() {
   int input;
   cin >> input;
   int count = 0;
   
   
   while (input != 1) {
      if (count == 9) {
         cout << input << "\t" << endl;
         count = -1;
      }
      else {
         cout << input << "\t";
      }
      if (input % 2 == 0) {
         input = input / 2;
         count += 1;
         continue;
      }
      else if (input % 2 != 0) {
         input = (input * 3) + 1;
         count += 1;
         continue;
      }
   }
   cout << input << endl;
   

   return 0;
}