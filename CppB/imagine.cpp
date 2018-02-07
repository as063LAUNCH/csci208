//Anushikha Sharma and Cristal Hermosillio
//CSCI208 - Thursday 1pm-3pm
//Prof. Razet
//Lab - CppB
//Problem 5
#include <iostream>
using std::ostream;
using namespace std;

class Imag{
 public:
  float real;
  float complex;

  Imag();
  Imag(float x, float y){
    real = x;
    complex = y;}
  Imag add(Imag adder){
    Imag addition = Imag(real + adder.real, complex + adder.complex);
    return addition;}
  Imag multiply(Imag multiplier){
    float multreal = (real*multiplier.real) - (complex * multiplier.complex);
    float multimag = (real*multiplier.complex) + (complex * multiplier.real);
    return Imag(multreal, multimag);}
};



Imag operator+(Imag n1, Imag n2){
  Imag add1 = n1.add(n1);
  return add1;
}
Imag operator*(Imag n1, Imag n2){
  Imag mult1 = n1.multiply(n2);
  return mult1;
}
ostream & operator <<(ostream &c, Imag x){
  c << x.real << "+ i" << x.complex;
}

int main(){
Imag n1 = Imag(0.3, 0.2);
Imag n2 = Imag(0.6, 0.75);
cout << n1 << endl;
cout << n2 << endl;
cout << "n1 + n2 = " << (n1+n2) << endl;
cout << "n1 * n2 = " << (n1*n2) << endl;
cout << "n1 * n1 * n1 * n1 = " << (n1 * n1 * n1 * n1) << endl;
}


