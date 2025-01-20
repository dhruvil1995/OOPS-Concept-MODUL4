#include<iostream>
using namespace std;

class Car{
	private:
		string company;
		string model;
		int year;
		public:
		
			setcompany(string c){
				company =c;
			}
			setmodel(string m){
				model =m;
			}
			setyear(int y){
				year =y;
			}
			string getcompany(){
				return company;
			}
			string getmodel(){
				return model;
			}
			int getyear(){
				return year;
			}
			
			displayinfo(){
				cout<<"car detail:"<<endl;
				cout<<"care comapny:"<<company<<endl;
				cout<<"care model:"<<model<<endl;
				cout<<"care year:"<<year<<endl;
			}
};

main(){
	Car obj;
	obj.setcompany("tata");
	obj.setmodel("indica");
	obj.setyear(1999);
	
	obj.displayinfo();
	
	cout<<"getter function call:"<<endl;
	cout<<"company:"<<obj.getcompany()<<endl;
	cout<<"model:"<<obj.getmodel()<<endl;
	cout<<"year:"<<obj.getyear()<<endl;
}
