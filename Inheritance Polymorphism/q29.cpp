#include<iostream>
using namespace std;

class Base{
	public:
	Base(){
		cout<<"base class constructer called"<<endl;
      }
};

class Derived : public Base{
	public:
		Derived(){
			cout<<"derived class constructer called"<<endl;
		}
};
class Derived1 :public Derived{
	public:
		Derived1(){
			cout<<"derived1 class constructer called"<<endl;
		}
};
main(){
	Derived1 obj;
}
