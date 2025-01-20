#include<iostream>
using namespace std;

class Address{
	private:
		string street;
		string city;
		string state;
		string postalcode;
		
		public:
			inputAddress(){
				cout<<"enter street:";
				cin>>street;
				cout<<"enter city:";
				cin>>city;
				cout<<"enter state:";
				cin>>state;
				cout<<"enter postalcode:";
				cin>>postalcode;
			}
			displayinfo() const{
				cout<<"Address:"<<street<<","<<city<<","<<state<<","<<postalcode<<endl;
				
			}
		};
		class Student{
			private:
				string name;
				string studentclass;
				int rollnumber;
				float marks;
				Address address;
				public:
					inputstudentdetail(){
						cout<<"enter student name:";
						cin>>name;
						cout<<"enter student class:";
						cin>>studentclass;
						cout<<"enter rollnumber:";
						cin>>rollnumber;
						cout<<"enter mark:";
						cin>>marks;
						address.inputAddress();
					}
					char calculategrade(){
						if (marks>=90) return 'A';
						else if(marks>=75) return 'B';
						else if(marks>=65) return 'C';
						else return 'F';
						
						}
						displaystudentinfo(){
							cout<<"student name:"<<name<<endl;
							cout<<"class:"<<studentclass<<endl;
		                    cout<<"roll number:"<<rollnumber<<endl;
		                    cout<<"mark:"<<marks<<endl;
		                    cout<<"grade:"<<calculategrade()<<endl;
		                     address.displayinfo();
						}
											
		};
		mian(){
			Student obj;
			obj.inputstudentdetail();
			obj.displaystudentinfo();
			return 0;
		}

