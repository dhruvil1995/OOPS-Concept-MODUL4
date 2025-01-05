#include<iostream>
using namespace std;
//WAP to create simple calculator using class
class A{
	public:
		int a,b,result;
		char opration;
		
		calculater()
		{
			cout<<"enter first number:"<<endl;
			cin>>a;
			cout<<"enter opration(+ / * -)";
			cin>>opration;
		    cout<<"enter seconf number:"<<endl;
		    cin>>b;
		    
		    switch(opration)
		    {
		    	case'+':
		    		{
		    			result=a+b;
		    			break;
					}
				case'-':
					{
						result=a-b;
						break;
					}
				case'*':
					{
						result=a*b;
						break;
					}
				case'/':
				{
					result=a/b;
					break;
				}
			}
		}
};
main()
{
	A dhruvil;
	dhruvil.calculater();
	
}
