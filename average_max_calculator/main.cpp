#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int input1;
   int max = 0;
   double average = 0;
   double sum = 0;
   double count = 0;
   
   cin >> input1;
   max = input1;

    while (input1 >= 0) {
       if (input1 > max) {
          max = input1;
       }
       sum += input1;
       count += 1;
       cin >> input1;
    }
    average = sum / count;
    cout << max << " " << fixed << setprecision(2) << average << endl; 
       
       
       
         
         

   return 0;
}
