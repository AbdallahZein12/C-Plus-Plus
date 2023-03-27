#include <iostream>
#include <cstdlib>
using namespace std;
int i;
string CoinFlip() {
  int random = rand() % 2;
  if (random == 1) {
     return("Heads");
  }
  else {
     return("Tails");
  }
}

int main() {
   int turns;
   int i; 
   srand(2);  // Unique seed
   
   cin >> turns;
   
   for(i=0;i<turns;++i){
      cout <<CoinFlip() << endl;
   }
   
   return 0;
}
