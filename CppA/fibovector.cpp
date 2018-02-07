//Anushikha Sharma
//CSCI208 - Thursday 1pm-3pm
//Prof. Razet
//Lab - CppA
//Problem 7

#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <functional>
#include <algorithm>
using namespace std;
int fibo(vector<int> &table, int n){
  if (n == 0){
    return 1;
  }if (n == 1){
    return 1;
  } else {
    if (table[n] == 0){
      return fibo(table, n-1)+fibo(table, n-2);
    } else 
      return table[n];
}
}

int main(){
  vector<int> memo(47,0);
  for(int i = 0; i < 47; i++){
cout << "fibo(" << i <<")=" << fibo(memo, i) << endl;
    if(i == 0){
      memo[0] = 1;
    }if(i == 1){
      memo[1] = 1;
    }
    if (i == 46){
    cout << "SUSPICIOUSLY WRONG!" << endl;
  }
  }
  return 0;
}
