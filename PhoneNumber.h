#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class PhoneNumber{
private :
string areacode;
string exchange;
string line;

public:
friend istream& operator>> (istream&, PhoneNumber&);
friend ostream& operator<<(ostream&,const PhoneNumber&);
};

istream& operator>> (istream& input, PhoneNumber& number ){
  input.ignore();
  input >> setw(3)>> number.areacode;
  input.ignore(2);
  input >> setw(3)>> number.exchange;
  input.ignore(1);
  input>> setw (4)>> number.line;
  input.ignore();
  return input;
  
}

ostream& operator<<(ostream& output, const PhoneNumber& number ){
  output << "area code :" <<  number.areacode
         << "\n exchange: " << number.exchange 
         << "\n line :"<<  number.line
         << "\n number is :" <<"("<<number.areacode<< ")"
         << number.exchange << "-" <<number.line << endl;

  return output;
}
