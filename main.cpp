#include <iostream>
using namespace std;

int main() {
  int number;
  
  cout << "Enter a number between 1 and 10: ";
  cin >> number;
  

  if (number > 2 || number < 6)
    cout << "Your number is between 2 and 6.\n" << endl;

  if (number < 3 || number > 7) 
   { 
     cout << "Your number falls outside of a range.\n" << endl;
  
  } 

    
}