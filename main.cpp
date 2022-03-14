#include <iostream>
#include "PhoneNumber.h"

using namespace std;


int main() {
  PhoneNumber phone1, phone2;
  cout << "enter the phone Number in forramt  (xxx) xxx-xxxx"<<endl;
  
  cin >> phone1>>phone2;
  
cout << "teasting the pertator  overloeading "<< endl;
  
  cout << phone1 << phone2;
  
  return 0;
}