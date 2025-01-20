#include<iostream>
using namespace std;


		
		float add(float a,float b){
			return a+b;
		}
		
		float sub(float a,float b){
			return a-b;
		}
	
		float mult(float a,float b){
			return a*b;
		}
		
			float divid(float a,float b){
			if(b!=0){
				return a/b;
			}
			else{
				cout<<"error!!division  by zero"<<endl;
			}
		}
		int add(int a,int b){
			return a+b;
		}
		int sub(int a,int b){
			return a-b;
		}
			int mult(int a,int b){
			return a*b;
		}
		int divid(int a,int b){
			if(b!=0){
				return a/b;
			}
			else{
				cout<<"error!!division  by zero"<<endl;
			}
		}

main(){
	cout<<"float variable vale:"<<endl;
	float num1=2.05,num2=5.05;
	cout<<"addition:"<<add(num1,num2)<<endl;
	cout<<"substraction:"<<sub(num1,num2)<<endl;
	cout<<"multiplication"<<mult(num1,num2)<<endl;
	cout<<"division"<<divid(num1,num2)<<endl;
	
	cout<<"int variable value:"<<endl;
	
	int  num3=2,num4=3;
		cout<<"addition:"<<add(num3,num4)<<endl;
	cout<<"substraction:"<<sub(num3,num4)<<endl;
	cout<<"multiplication"<<mult(num3,num4)<<endl;
	cout<<"division"<<divid(num3,num4)<<endl;
	
}
