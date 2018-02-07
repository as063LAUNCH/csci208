//Anushikha Sharma
//CSCI208 - Thursday 1pm-3pm
//Prof. Razet
//Lab - CppA
//Problem 6

#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <functional>
#include <algorithm>
using namespace std;
int main(){
  int num;
  vector<int> vec;
  cout << "Enter numbers between 0 and 10: " ;
  while(cin >> num){
    vec.push_back(num);
  }
  for(int i = 0; i < vec[i]; i++){
    std::sort(vec.begin(),vec.end());
    //  int min = *std::min_element(vec.begin(), vec.end());
    float average  = (std::accumulate(vec.begin(), vec.end(), 0.0))/vec.size();
      if (average <= 2){
	char grade = 'F';
	cout << "The grade is " << grade << endl;
      }if (average <= 4 && average > 2){
	char grade = 'D';
	cout << "The grade is " << grade << endl;
      }if (average <= 6 && average > 4){
	char grade = 'C';
	cout << "The grade is " << grade << endl;
      }if (average <= 8 && average > 6){
	char grade = 'B';
	cout << "The grade is " << grade << endl;
      }if (average <= 10 && average > 8){
	  char grade = 'A';
	  cout << "The grade is " << grade << endl;
      }
  return 0;
  }
}
