//Anushikha Sharma and Cristal Hermosillio
//CSCI208 - Thursday 1pm-3pm
//Prof. Razet
//Lab - CppB
//Problem 2

#include <iostream>
using namespace std;
class Pb2 {
public:
  void print();
  void change(int n);
private:
  string fruit = "Apple: ";
  int value = 7;
};
void Pb2::print(){
  cout << fruit  << value << endl;
}
void Pb2::change(int n){
  value = n;
}


int main(){
  Pb2 obj1 = Pb2(); // notice we did NOT use new here
  Pb2 obj2 = obj1;
  obj1.print();
  obj2.print();
  obj1.change(42); // change a member data to 42
  obj1.print();
  obj2.print();
}
