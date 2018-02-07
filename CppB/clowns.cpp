//Anushika Sharma and Cristal Hermosillo
//Csci208
//CppB Lab
//
#include <iostream>
using namespace std;

class Clown {
public:
  string name;
  Clown(string clown) {
    this->name = clown;
  };

  void dance() {
    cout << name << " twirls like a ballerina.\n" << endl;
  }
};

class CircusClown: public Clown {
public:
  CircusClown(string clown): Clown(clown){};

  void dance() {
    cout << name << " hops up and down.\n" << endl;
  }
};

  int main() {
    Clown carl = Clown("Carl");
    carl.dance();

    CircusClown joe = CircusClown("Joe");
    joe.dance();
    
    CircusClown bob = CircusClown("Bob");
    bob.dance();

    Clown bobjr = CircusClown("Bob");
    bobjr.dance();
    
    Clown joeJr = (Clown) joe;
    joeJr.dance();
  }
