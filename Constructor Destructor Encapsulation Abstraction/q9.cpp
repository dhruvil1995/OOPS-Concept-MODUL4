#include<iostream>
using namespace std;

class Car{
	private:
		string compnay;
		string model;
		int year;
		
		public:
			 // Constructor to initialize the object with company, model, and year
			Car(string c,string m,int y)
			{
				compnay = c;
				model = m;
				year = y;
			}
			
			setcompnay(string c){
				compnay =c;
			}
			setmodel(string m){
				model=m;
			}
			setyear(int y){
				year =y;
			}
			
			// Getter methods return the value of private attributes	
			string getcompnay(){
				return compnay;
			}
			string getmodel(){
				return model;
			}
			int getyear(){
				return year;
			}
			displayinfo()
			{
				cout<<"car informetion:"<<endl;
				cout<<"company:"<<compnay<<endl;
				cout<<"model:"<<model<<endl;
				cout<<"year:"<<year<<endl;
			}
};
main()
{
	Car obj("toyota","coroll",2020);
	obj.displayinfo();
	obj.setcompnay("honda");
	obj.setmodel("civic");
	obj.setyear(2020);
	
	cout<<"update care information:"<<endl;
	obj.displayinfo();
	
}
