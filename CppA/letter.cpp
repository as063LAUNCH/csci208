//Anushikha Sharma
//CSCI208 - Thursday 1pm-3pm
//Prof. Razet
//Lab - CppA
//Problem 4
#include <iostream>
using namespace std;
int main(){
  string first_name;
  string friend_name;
  char friend_diet;
  int age;
  cout << "Please enter your first name: " << first_name;
  cin >> first_name;
  cout << "Hello," << first_name << endl;
  cout << "Enter the name of a person you want to invite for dinner: " << friend_name << endl;
  cin >> friend_name;
  cout << "Enter 'a' for no food restriction, 'v' for vegetarian, 'g' for vegan." << friend_diet << endl;
  cin >> friend_diet;
  if (friend_diet == 'a'){
    cout << "Great! I'm cooking sphagetti and meatballs." << endl;
  } else if (friend_diet == 'v'){
    cout << "Great! I'm making ceasar salad and vegetarian chili." << endl;
  } else {
      cout << "Great! I'm making a vegan potato salad." << endl;
  }
  cout << "Enter the age of the invitee please." << age << endl;
  cin >> age;
  int age2 = age+1;
  cout << "I heard you're turning " << age2 << " soon! Great, this will make the dinner even more special!" << endl;
  
  
return 0;
}
 

