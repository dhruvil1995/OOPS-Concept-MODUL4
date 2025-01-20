#include<iostream>
using namespace std;

class Calculater{
	public:
		
		inline int multiply(int a,int b){
			return a*b;
		}
		inline int cub(int a){
			return a*a*a;
		}
};
main()
{
	int num1,num2;
	
	Calculater obj;
	
	cout<<"multiplication of two number is:"<<endl;
	cin>>num1>>num2;
	
	int multiplay_result=obj.multiply(num1,num2);
	
	
	cout<<"miltiplication of"<<num1<<"and"<<num2<<"is"<<multiplay_result<<endl;
	
	cout<<"enter find number of cub"<<endl;
	cin>>num1;
	int cubresult=obj.cub(num1);
	cout<<"cub of number"<<num1<<"is:"<<cubresult;
}
