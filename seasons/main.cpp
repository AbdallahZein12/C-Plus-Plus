#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputMonth;
   int inputDay;
   
   cout << "Input your month> ";
   cin >> inputMonth;
   cout << endl;
   cout << "Input your day> ";
   cin >> inputDay;
   
   if (inputMonth != "January" and inputMonth != "February" and inputMonth != "March" and inputMonth != "April" and inputMonth != "May" and inputMonth != "June" and inputMonth != "July" and inputMonth != "August" and inputMonth != "September" and inputMonth != "November" and inputMonth != "December" and inputMonth != "October") {
      cout << "Invalid" << endl;
   }
   else if (inputDay > 31 or inputDay <= 0 ){
      cout << "Invalid" << endl;
   }
   
   else if (inputMonth == "March" or inputMonth == "April" or inputMonth == "May" or inputMonth == "June") {
      if (inputMonth == "March" and inputDay < 20) {
         cout << "Winter" << endl;
      }
      else if (inputMonth == "April" and inputDay > 30) {
         cout << "Invalid" << endl;
      }
      else if (inputMonth == "June" and inputDay > 30) {
         cout << "Invalid" << endl;
      }
      
      else if (inputMonth == "June" and inputDay > 20) {
         cout << "Summer" << endl;
      }
      else {
         cout << "Spring" << endl;
      }
   }
   else if (inputMonth == "June" or inputMonth == "July" or inputMonth == "August" or inputMonth == "September") {
      if (inputMonth == "June" and inputDay < 21) {
         cout << "Spring" << endl;
      }
      else if (inputMonth == "September" and inputDay > 30) {
         cout << "Invalid" << endl;
      }
      else if (inputMonth == "September" and inputDay > 21) {
         cout << "Autumn" << endl;
      }
      else {
         cout << "Summer" << endl;
      }
   }
   else if (inputMonth == "September" or inputMonth == "October" or inputMonth == "November" or inputMonth == "December") {
      if (inputMonth == "September" and inputDay < 22) {
         cout << "Summer" << endl;
      }
      else if (inputMonth == "September" and inputDay > 30) {
         cout << "Invalid" << endl;
      }
      else if (inputMonth == "November" and inputDay > 30) {
         cout << "Invalid" << endl;
      }
      else if (inputMonth == "December" and inputDay > 20) {
         cout << "Winter" << endl;
      }
      else {
         cout << "Autumn" << endl;
      }
   }
   else {
      if (inputMonth == "December" and inputDay < 21) {
         cout << "Autumn" << endl;
      }
      else if (inputMonth == "March" and inputDay > 19) {
         cout << "Spring" << endl;
      }
      else if (inputMonth == "February" and inputDay > 28) {
         cout << "Invalid" << endl;
      }
      else {
         cout << "Winter" << endl;
      } 
   }

   

return 0;
}
