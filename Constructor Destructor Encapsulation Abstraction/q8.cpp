#include<iostream>
using namespace std;

class Calculater{
	public:
		
		int num1,num2;
		
		Calculater(int a,int b){
			num1=a;
			num2=b;
		}
		
		add(){
			cout<<"additon:"<<num1+num2<<endl;
		}
		sub(){
			cout<<"substraction:"<<num1-num2<<endl;
		}
		mult(){
			cout<<"multiplication:"<<num1*num2<<endl;
		}
		division(){
			if(num2 !=0){
				cout<<"diviosn:"<<num1/num2<<endl;
			}
			else{
			cout<<"division by zero is not valide:"<<endl;
			}
		}
		
		
};

int main(){
	
	int num1,num2;
	
	cout<<"enter two number:";
	cin>>num1>>num2;
	
	Calculater obj(num1,num2);
	obj.add();
	obj.sub();
	obj.mult();
	obj.division();
	
}
