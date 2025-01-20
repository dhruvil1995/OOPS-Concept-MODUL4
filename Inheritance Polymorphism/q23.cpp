#include<iostream>
using namespace std;

class Address{
	private:
		string  street;
		string city;
		string state;
		string code;
		public:
		
		Address(string street,string city,string state,string code){
			this->street =street;
			this->city = city;
			this->state =state;
			this->code=code;
			
		} 
		displayAddress(){
			cout<<"street:"<<street<<endl;
			cout<<"city:"<<city<<endl;
			cout<<"state:"<<state<<endl;
			cout<<"code:"<<code<<endl;
		}
};

class Student{
	private:
		string name;
		string studentclass;
		int rollnumber;
		float mark;
		Address address;
		
		public:
			Student(string name,string studentclass,int rollnumber,float mark,Address address) :address(address)
			{
				this->name=name;
				this -> studentclass=studentclass;
				this ->rollnumber=rollnumber;
				this ->mark=mark;
			}
			char calculategrad(){
				if(mark>=90){
					return 'A';
				}
				else if(mark>=80){
					return 'B';
				}
				else if(mark>=70){
					return 'C';
				}
				else{
					return 'D';
				}
			}
			
			displayinfo(){
			cout<<"student name:"<<name<<endl;
			cout<<"class:"<<studentclass<<endl;
			cout<<"rollnumber"<<rollnumber<<endl;
			cout<<"mark:"<<mark<<endl;
			cout<<"grade:"<<calculategrad()<<endl;
			cout<<"address:"<<endl;
			address.displayAddress();
			}
};
main()
{
	Address obj("a18","shivangli park","ahemedabd","382443");
	Student student("dhruvil","10th grade",25,85.5,obj);
	student.displayinfo();
}
