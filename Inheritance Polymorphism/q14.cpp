#include<iostream>
using namespace std;

class Calculater{
	private:
		int num1,num2;
		public:
			Calculater(int a,int b){
				num1=a;
				num2=b;
			}
			add(){
				cout<<"addition:"<<num1+num2<<endl;
			}
			sub(){
				cout<<"substraction:"<<num1-num2<<endl;
			}
			multiplication(){
				cout<<"multiplication:"<<num1*num2<<endl;
			}
			division(){
				if(num2 !=0){
					cout<<"division:"<<float(num1/num2)<<endl;
				}
				else{
					cout<<"error!!division by zero"<<endl;
				}
			}
};

main(){
	int num1,num2;
	
	cout<<"enter two number:"<<endl;
	cin>>num1>>num2;
	
	Calculater obj(num1,num2);
	obj.add();
	obj.sub();
	obj.multiplication();
	obj.division();
}
