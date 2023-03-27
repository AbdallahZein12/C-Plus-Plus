#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string CreateAcronym(string userPhrase){
   string accronym = "";
   int i;
   
   for(i=0;i<userPhrase.size();++i){
      if((i==0) || (userPhrase[i-1] == ' ')) {
         if(isupper(userPhrase[i])) {
            accronym += userPhrase[i];
            accronym += ".";
         }
      }
   }
   return accronym;
}
      

int main() {
   string userPhrase1;
   getline(cin,userPhrase1);
   cout << CreateAcronym(userPhrase1) << endl;

   return 0;
}