#include<iostream>
using namespace std;

class Bankaccount{
	private://access specifer
		string name_depositor;//data member
		int account_number;
		string account_type;
		double balance;
		public://member function to assing value to the data members
			assingnvalue(string name,int number,string type,double initialbalance)
			{
			
			name_depositor=name;
			account_number=number;
			account_type=type;
			balance=initialbalance;
		}
		
		deposit(double amount){
			if(amount>0){
			
			balance += amount;
			cout<<"deposite:$"<<amount<<endl;
		}else{
			cout<<"Deposite amount must be in positive "<<endl;
		}
	}
		
	     withdraw(float amount){
			if(amount>0){
			
			
			balance -=amount;
			
			cout<<"withdrew"<<amount<<"new balance:"<<balance<<endl;
			
		}
		else{
			cout<<"insufficant balance for withdraw amount:"<<endl;
		}
	}
		diplayaccountinfo(){
			cout<<"Depositer :"<<this->name_depositor <<endl;
			cout<<"balance:"<<this->balance<<endl;
		}
		
			
		
};

main()
{
	Bankaccount obj1;
	obj1.assingnvalue("dhruvil",12345,"saving",5000.0);
	obj1.diplayaccountinfo();
	obj1.deposit(1000);
	obj1.withdraw(500);
	obj1.diplayaccountinfo();
}
