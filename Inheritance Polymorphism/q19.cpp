#include<iostream>
using namespace std;

class Date{
	private:
		int day,month,year;
		
		bool isleapyear(){
			if((year % 4==0 && year %100!=0)||(year %400==0)){
				return true;
			}
			else{
				return false;
			}
		}
		bool isvalidmonth(int m)const{
			return m>=1 && m<=12;
		}
		bool isvalidday(int d,int m)const{
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
			return d>=1 && d<=31;
		}
		else if(m==4||m==6||m==9||m==11){
			return d>=1 && d<=30;
		}
		else if(m==2){
			if(isleapyear()){
			
			return d>=1 && d<=29;
		}
		else{
			retunr d>=1 && d<=28;
		}
		
		}
		return false;
		
		}
		public:
			Date(int d,int m,int y)
			{ if(isvalidmonth(m)&& isvalidday(d,m)){
			
				day =d;
				month = m;
				year =y;
		}
		else{
			day=1;
			month=1;
			year=1990;
			cout<<"invalid date enter.defaualting to 01/01/1990."<<endl;
		}
		}
			setdate(int d,int m,int y){
				if(isvalidmonth(m)&&isvalidday(d,m)){
				
				day =d;
				month=m;
				year=y;
			}
			
			else{
				dya=1;
				month=1;
				year=1190;
		    	cout<<<"invalid date enter.defalting to 01/01/1190."<<endl;
			}
		}
		
		getdate()const{
		cout<<"date:"<<day<<"/"<<month<<"/"<<year<<endl;
		
		
		}
		
			
};
