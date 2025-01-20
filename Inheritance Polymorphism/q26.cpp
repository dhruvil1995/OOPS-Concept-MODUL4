#include<iostream>
using namespace std;

class Person{
	private:
		string name;
		int age;
		public:
			initializeperson(string n,int a){
				name=n;
				age=a;
			}
			displayperson(){
				cout<<"name:"<<name<<endl;
				cout<<"age:"<<age<<endl;
			}
};
class Student : public Person{
	private:
		float percentage;
		public:
			initializestudent(float p){
				percentage = p;
			}
			displaystudent(){
				displayperson();
				cout<<"percentage:"<<percentage<<endl;
			}
};
class Teacher :public Person{
	private:
		float salary;
		public:
			initializetechare(float s){
				salary=s;
			}
			displaytechare(){
					displayperson();
				cout<<"salary:$"<<salary<<endl;
				
			}
};

main(){
	Student obj;
	obj.initializeperson("dhruvil",20);
	obj.initializestudent(85.5);
	cout<<"student deatail:"<<endl;
	obj.displaystudent();
	cout<<endl;
	
	Teacher obj1;
	obj1.initializeperson("smith",30);
	obj1.initializetechare(50000);
	cout<<"teacher detail:"<<endl;
	obj1.displaytechare();
}
