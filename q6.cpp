#include<iostream>
using namespace std;

class Person{
	private:
		string name;
		int age;
		string country;
		
		public:
			
		void	setpersondetail(string n,int a,string c){
				 name=n;
				 age=a;
				 country=c; 
			}
			string getname(){
				return name;
			}
			int getage(){
				return age;
			}
			string getcountry(){
				return country;
			}
			displayinfo(){
				cout<<"name:"<<getname()<<endl;
				cout<<"age:"<<getage()<<endl;
				cout<<"coutry:"<<getcountry()<<endl;
			}
			
};
main()
{
	string name,country;
	int age;
	
	cout<<"enter name:";
	cin>>name;
	cout<<"enter age:";
	cin>>age;
	cout<<"enter country name:";
	cin>>country;
	
	Person obj;
	obj.setpersondetail(name,age,country);
	obj.displayinfo();
}
