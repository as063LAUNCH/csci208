//Anushikha Sharma
//CSCI208 - Thursday 1pm-3pm
//Prof. Razet
//Lab - CppA
//Problem 2
#include <iostream>
using namespace std;
int main(){
  int i = 50;
  char c = 'C';
  bool b = true;
  short s = 34;
  long k = 12L;
  long long kk = 10000LL;
  float f = 0.53f;
  double d = 2.0 * f;
  long double kd = k * d; 

  //Safe coercions
  //float to double
  float t1 = (d * f);
  double fd  = 2.0 * 0.53 * 0.53;
  //int to long
  int t3 = i*i;
  long il = t3;
  //Unsafe coercions
  //double to long
  double t2 = d*d;
  long dl = t2;
  float t4 = 2.34 * 5.67;
  long fl = t4;

  //print statements
  cout << "char:" << sizeof(c) << endl;
  cout << "bool:" << sizeof(b) << endl;
  cout << "short:" << sizeof(s) << endl;
  cout << "int:" << sizeof(i) << endl;
  cout << "float:" << sizeof(f) << endl;
  cout << "long:" << sizeof(k) << endl;
  cout << "long long:" << sizeof(kk) << endl;
  cout << "double:" << sizeof(d) << endl;
  cout << "long double:" << sizeof(kd) << endl;
  cout << "" << endl;
  cout << "Just float:" << t1 << endl;
  cout << "Conversion from float to double:" << fd << endl;
  cout << "float to double is a safe conversion" << endl;
  cout << "" << endl;
  cout << "Just int:" << t3 << endl;
  cout << "Conversion from int to long:" << il << endl;
  cout << "int to long is a safe conversion" << endl;
  cout << "" << endl;
  cout << "Just double:" << t2 << endl;
  cout << "Conversion from double to long :" << dl << endl;
  cout << "double to long is not a safe conversion" << endl;
  cout << "" << endl;
  cout << "Just float:" << t4 << endl;
  cout << "Conversion from float to long :" << fl << endl;
  cout << "float to long is not a safe conversion" << endl;
return 0;
}
//A strongly typed language requires the user to define the type of each variable and data structure. Thus, by definition C++ seems to be a strongly typed language. 
