#include<iostream>
using namespace std;

class Person{
	private:
		string name;
		int age;
		string country;
		public:
			Person(string n,int a,string c)
			{
				name =n;
				age =a;
				country=c;
			}
			setname(string n){
				name=n;
			}
			setage(int a){
				age=a;
			}
			setcountry(string c){
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
			displaydetail(){
				cout<<"name:"<<name<<endl;
				cout<<"age:"<<age<<endl;
				cout<<"country:"<<country<<endl;
			}
};
main(){
	Person obj("dhruvil",28,"india");
	obj.setname("dhruvil");
	obj.setage(28);
	obj.setcountry("india");
	
	cout<<"value using getter functuion:"<<endl;
	cout<<"name:"<<obj.getname()<<endl;
	cout<<"age:"<<obj.getage()<<endl;
	cout<<"country"<<obj.getcountry()<<endl;
	
	obj.displaydetail();
}
