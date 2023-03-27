#include <iostream>
#include <iomanip>
using namespace std;

double JiffiesToSeconds(double userJiffies) { 
   return(userJiffies / 100);
}

int main() {
   double userJiffies;
   
   cin >> userJiffies;
   
   cout << fixed << setprecision(3) << JiffiesToSeconds(userJiffies)<<endl; 

   return 0;
}