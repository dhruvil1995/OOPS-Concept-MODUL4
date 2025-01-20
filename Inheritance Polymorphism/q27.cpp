#include<iostream>
using namespace std;

class Studentdetail{
	private:
		string name;
		int rollno;
		string department;
		public:
			inputedetail(){
				cout<<"enter student name:";
				cin>>name;
				cout<<"enter roll number:";
				cin>>rollno;
				cout<<"enter department:";
				cin>>department;
			}
			displaydetail(){
				cout<<"student name:"<<name<<endl;
				cout<<"roll number:"<<rollno<<endl;
				cout<<"department:"<<department<<endl;
			}
};
class academicdetail{
	private:
		float mark[5];
		public:
			inputmark(){
				cout<<"enter mark for five student:"<<endl;
				for(int i=0;i<5;i++){
					cout<<"subject:"<<i+1<<":";
					cin>>mark[i];
				}
			}
			displaymarks(){
				cout<<"marks:";
				for(int i=0;i<5;i++){
					cout<<"subject "<<i+1<<":"<<mark[i]<<endl;
				}
			}
			calculateavg(){
				float total=0;
				for(int i=0;i<5;i++){
					total=+mark[i];
				}
				return total/5;
			}
			char calculategrad(){
				float avg=calculateavg();
				if(avg>90){
					return 'A';
				}
				else if(avg>=75){
					return 'B';
				}
				else if(avg>=50){
					return 'C';
					}else{
						return 'D';
					}
				}
			
};
class student : public Studentdetail ,public academicdetail{
	public:
		displaymarksheet(){
		
			displaydetail();
			displaymarks();
			float avg=calculateavg();
			char grad=calculategrad();
			
			cout<<"avrg mark:"<<avg<<endl;
			cout<<"grade:"<<grad<<endl;
		}
			
		
};
main(){
	student obj;
	obj.inputedetail();
	obj.inputmark();
	obj.displaymarksheet();
}

