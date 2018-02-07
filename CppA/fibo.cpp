//Anushikha Sharma
//CSCI208 - Thursday 1pm-3pm
//Prof. Razet
//Lab - CppA
//Problem 5

#include <iostream>
using namespace std;
int fibo(int n){
  if (n == 0){
    return 1;
  }if (n == 1){
    return 1;
  }
  return fibo(n-1)+fibo(n-2);
}

int main(){
  for(int i = 0; i < 47; i++){
    cout << "fibo(" << i <<")=" << fibo(i) << endl;
    if (i == 46){
    cout << "SUSPICIOUSLY WRONG!" << endl;
  }
  }
  return 0;
}
