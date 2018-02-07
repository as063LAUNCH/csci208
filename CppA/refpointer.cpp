//Anushikha Sharma
//CSCI208 - Thursday 1pm-3pm
//Prof. Razet
//Lab - CppA
//Problem 3
#include <iostream>
using namespace std;
int main(){
  /*int i = 50;
  int l = 10;
  int a = 9;
  int *p = &a;
  cout << "pointer p:" << *p << endl;
  int &j = i;
  //int &k = 9; it is not possible to declare a reference without initializing it
  cout << "j:" << j << endl;
  cout << "i:" << i << endl;
  cout << "j:" << j << endl;
  cout << "a:" << a << endl;
  //p = &i; 
  *p = l;
  j = l;//j will always refer to i so we're changing the value of i)
  cout << "what's in i?" << i << endl;
  cout << "j:" << j << endl;
  l++;
  cout << "j:" << j << endl;
  cout << "i:" << i << endl;
  cout << "p:" << *p << endl;
  cout << "a:" << a << endl;*/
  int i = 5; int *p = &i; int &r = *p;
  *p += r;
  cout << i << " " << *p << " " << r << endl;
return 0;
}
 
/*answers problem3
 * 1.) It is not possible to declare a reference without initializing it
 * 2.) it is possible to declare a pointer without initializing it
 * 3.) It is not possible to reassign a reference to a different variable
 * 4.) It is not possible to reassign a pointer to a different variable
 * 5.) The result is '10 10 10' - when we add 5 to *p it become 10 which changes the value of i. 
 * Now, when we add 5 to *p we also equate it to r which then has the value of 10 too. 
 */
