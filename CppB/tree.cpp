#include<iostream>
#include<string>
#include "tree.h"
using namespace std;
/* If nullptr is causing an error then you are not correctly using C++11 */

BST::BST(){
  this->key = -1; // placeholder till you get a real value
  this->left = nullptr; // nullptr is the null pointer.
  this->right = nullptr;
  this->value = "";
}

bool BST::isleaf(){
  return (this->left == nullptr) && (this->right == nullptr);
}

/* Define the functions insert() and search() here according to their declaration in
the tree.h header file. */

/*the insert function*/
void BST::insert(int k, string v){
  if(k < this->key){
    if(this->left == nullptr){
        this->left->key = k;
        this->left->value = v;
	//this->left->left= nullptr;
	//this->left->right= nullptr;
    }else{
      this->left->insert(k,v);
    }
  }else if(k > this-> key){
    if(this->right == nullptr){
      	this->right->key = k;
      	this->right->value=v;
      //this->right->left= nullptr;
      //this->right->right= nullptr;
    }else{
      this->right->insert(k,v);
    }
  }else{
	cout<< "Error\n " << endl;
}
};

/*the insert function*/
string BST::search(int k){

    if(k < this->key){
        if(this->left == nullptr){
	        cout << " No Matches Found\n"<<endl;
        }else{
            return this->left->search(k);
    }
    }else if(k > this-> key){
        if(this->right == nullptr){
 	        cout<< "No Matches Found\n" << endl;
    }else{
        return this->right->search(k);
    }
  }else{
	    cout<< "No Macthed Found\n " << endl;
}
};





int main(){
  BST * t = new BST();

  //t->insert(10,"Ten");
  t->insert(5,"Five");
  //t->insert(12, "Twelve");
  //t->insert(7, "Seven");
  //t->insert(4, "Four");
  //t->insert(11, "Eleven");
  
  cout << t->search(5) << endl;
  //cout << t->search(10) << endl;
  //cout << t->search(6) << endl;
  //cout << t->search(7) << endl;
  //cout << t->search(11) << endl;
  
  return 0;
}
