#include<iostream>
using namespace std;

class Employee{
	private:
		string name;
		int  employee_id;
		double sellary;
		public:
			Employee(string pname,int id,double psellary)
			{
				name=pname;
				employee_id=id;
				sellary=psellary;
			}
			displayinfo(){
				cout<<"employee name:"<<name<<endl;
				cout<<"employee id:"<<employee_id<<endl;
				cout<<"employee sellary:"<<sellary<<endl;
			}
			setsellarybasedonperformance(int performancerating){
				if(performancerating==5){
					sellary += sellary *0.20;
				}
				else if(performancerating==4){
					sellary += sellary *0.10;
				}
				else if(performancerating==3){
					sellary += sellary * 0.05;
				}
				else if(performancerating==1 || performancerating==2){
					sellary -= sellary * 0.05;
				}
			}
			double getsellary(){
				return sellary;
			}
};
main()
{
	string name;
	int id,performancerating;
	double psellary;
	
	cout<<"enter name:"<<endl;
	cin>>name;
	cout<<"enter id:"<<endl;
	cin>>id;
	cout<<"enter initail sellary:"<<endl;
	cin>>psellary;
	
	Employee obj(name,id,psellary);
	obj.displayinfo();
	
	cout<<"enter perfomance rating (1-5):";
	cin>>performancerating;
	obj.setsellarybasedonperformance( performancerating);
	
	cout<<"after perfomance base sellary update:"<<endl;
	obj.displayinfo();
}
