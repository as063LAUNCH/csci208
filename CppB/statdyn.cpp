//Anushikha Sharma and Cristal Hermosillo
//Csci208
//CppB Lab

#include <iostream>
using namespace std;

class A{
    public:
        virtual void f() { cout << "Method from A"<< endl;}
        void g() { f(); }
};
class B: public A{
    public:
        void f() { cout << "Method from B" << endl;}
};

int main(){
    B b;
    b.g();
}
