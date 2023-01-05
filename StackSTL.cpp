//Stack using STL
#include<iostream>
#include<stack>
using namespace std;
int main(){

 //creating stack
 stack<int> s;

 //push operation
  s.push(2); //inserts 2 in stack
  s.push(3); //inserts 3 on top of 2

 //pop operation
  s.pop(); //pops out element acc. to LIFO

 //printing top element
  cout << "Top element is " << s.top() << endl;

 //checking if stack is empty or not
  if(s.empty()){
    cout << "Stack is empty" << endl;
  }
  else{
    cout << "Stack is not empty" << endl;
  }
 
  //size of stack  
  cout << "The size of stack is " << s.size() << endl;
}