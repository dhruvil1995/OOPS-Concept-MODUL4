#include<iostream>
using namespace std;

class base{
	private:
		int privatevar;
		protected:
			int protectedvar;
			public:
				int publicvar;
				
				base(){
					privatevar=10;
					protectedvar=20;
					publicvar=30;
				}
				display(){
					cout<<"base class privatevar:"<<privatevar<<endl;
					cout<<"base class protectedvar:"<<protectedvar<<endl;
					cout<<"base class publicvar:"<<publicvar<<endl;
				}
				
};
class derived : public base{
	public:
	show(){
		cout<<"derived class publicvar:"<<publicvar<<endl;
		cout<<"derived class protectedvar:"<<protectedvar<<endl;
	}
};
main(){
	base obj;
	derived obj1;
	cout<<"base class data:"<<endl;
	obj.display();
	cout<<"derived class data:"<<endl;
	obj1.show();
	
}
