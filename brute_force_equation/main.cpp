#include <iostream>
using namespace std;

int main() {
   bool answer = false;
   int a,b,c,d,e,f;

   cin>>a>>b>>c;
   cin>>d>>e>>f;
 

    for (int x = -10; x <= 10; x++)
       {
           for(int y = -10; y <= 10; y++)
           {
               
               if (((a*x)+(b*y)==c) && ((d*x)+(e*y)==f))
               {
                   
                   cout<<"x = "<<x<<", "<<"y = "<<y << endl;
                   answer = true;
               }
               else if (x == 10 && answer == false) 
               {
                  cout << "There is no solution" << endl;
                  break;
               }
           }
       }
   return 0;
   }