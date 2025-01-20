#include<iostream>
using namespace std;

class Opration{
	public:
		
		int multiplication(int a,int b){
			return a*b ; 
		}
		int cubic(int a){
			return a*a*a;
		}
		
};
main()
{
	Opration obj;
	int num1,num2;
	
	cout<<"enter two number :";
	cin>> num1 >> num2;

	int mul_result = obj.multiplication(num1,num2);
	cout<<"multiplication of"<<num1<<"and"<<num2<< "  is :"<<mul_result<<endl;
	
	int cub_result = obj.cubic(num1);
	 cout<<"enter number:";
	 cin>>num1;
	 
	 cout<<"cubic of "<<num1<<" is: "<<cub_result<<endl;
	 
}
