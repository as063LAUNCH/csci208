//Anushikha Sharma
//CSCI208 - Thursday 1pm-3pm
//Prof. Razet
//Lab - CppC
//Problem 1

#include <iostream>
using namespace std;
int main(){
  int a = 1, b = 1; //Yes, normal int
  const int c = 1; //Yes, const int
  int * d = &a;    //Yes, normal pointer to a normal int 
  //int * e = &c; //No, because invalid conversion from ‘const int*’ to ‘int*’
  const int * f = &a;//Yes, const pointer to a normal int
  const int * g = &c;//Yes, const pointer to a const int
  int * const h = &a; //Yes, const pointer to a const int /////
  const int * const i = &c; //Yes, const pointer to a const int /////
  int & j = a; //Yes, normal reference to a normal int
  //int & k = c; //No, because invalid initialization of reference of type ‘int&’ from expression of type ‘const int’
  const int & m = a; //Yes, const reference to a normal int
  //int & const n = a; //No, const’ qualifiers cannot be applied to ‘int&’
  const int x = 3; //Yes, const int 
  a = 2; //Yes
  //c = 2; //No, assignment of read-only variable ‘c’
  *d = 3; //Yes
  //*f = 3; //No, assignment of read-only location ‘*f’
  f = &b; //Yes
  //h = &b; //No, assignment of read-only variable ‘c’
  //*j = 3; //No, invalid type argument of unary ‘*’ (have ‘int’)
  //m = 3; //No, assignment of read-only reference ‘m’
}
