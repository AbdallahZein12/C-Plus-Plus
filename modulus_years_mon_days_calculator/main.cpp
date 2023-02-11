#include <iostream>
using namespace std;
 
int main() {
   int totalDays;
   int numYears;
   int numMonths;
   int numWeeks;
   int numDays;
   
   cout << "Input your total amount of days: ";
   cin >> totalDays;
   
   numYears = totalDays / 365;
   int rem = totalDays % 365;
   numMonths = rem / 30;
   rem = rem % 30;
   numWeeks = rem / 7;
   rem = rem % 7;
   
   numDays = rem;
   

   cout << "Years: " << numYears << endl;
   cout << "Months: " << numMonths << endl;
   cout << "Weeks: " << numWeeks << endl;
   cout << "Days: " << numDays << endl;
 
   return 0;
}
