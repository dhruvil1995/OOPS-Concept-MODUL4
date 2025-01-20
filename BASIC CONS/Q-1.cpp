//CLASS -> class is own group of data member and member of function.
//exp->car is class and wheel speed mileg is property.
//Data member and member of function defind  the properties and behaviour of the object in class.
//In the above example of class Car, the data member will be speed limit, mileage, etc,
// and member functions can be applying brakes, increasing speed, etc.

//OBJECT-->When a class is defined, only the specification for the object is defined; 
//no memory or storage is allocated. To use the data and access functions defined
// in the class, you need to create objects.


//WAP to create simple calculator using class
#include<iostream>
using namespace std;

class A{
	public: //acess specifier ->private public or protected
		int a,b,result;  //data member - > variable to be used
		char opration;
		calculater()//member function to introduce the person
		{
			cout<<"enter first number :"<<endl;
			cin>>a;
			cout<<"enter second number:"<<endl;
			cin>>b;
			cout<<"select opration(/ + - * )";
			cin>>opration;
			
			if(opration=='+')
			{
				result=a+b;
			}
			else if(opration=='-')
			{
				result=a-b;
			}
			else if(opration=='*')
			{
				result==a*b;
			}
			else if(opration=='/')
			{
				result==a/b;
			}
			
			cout<<"result:"<<result<<endl;
			
		}
	};
		main()
{
	A obj;
	obj.calculater();
}


