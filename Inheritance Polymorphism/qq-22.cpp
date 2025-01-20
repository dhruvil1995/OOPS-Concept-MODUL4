#include<iostream>
using  namespace std;

class Bankaccount{
	private:
		string name_depositer;
		int accountnumber;
		string accounttype;
		double accountbalance;
		
		public:
			
			
			assignvalue(string name,int number,string type,double balance)
			{
			
			name_depositer=name;
			accountnumber=number;
			accounttype=type;
			accountbalance=balance;
		}
			
		void	deposit(double  amount)
		{
				if(amount>0)
			{
			 accountbalance += amount;
				cout<<"deposit amount:"<<amount<<endl;
				
			}
			else{
				cout<<"amount must be in positive:"<<endl;
			}
		}
			withdraw(float amount)
			{
				if(amount>0)
				{
					amount -= accountbalance;
					cout<<"balance:"<<accountbalance<<"withdraw:"<<amount<<endl;
					
				}
				else{
					cout<<"insuffisent amount for withdraw amout:"<<endl;
				}
			}
			displayinfor()
			{
				cout<<"account name:"<<this->name_depositer<<endl;
					cout<<"balance:"<<this ->accountbalance<<endl;
			}
};
main()
{
	Bankaccount obj;
	obj.assignvalue("dhruvil",12563,"saving",5000);
	obj.displayinfor();
	obj.deposit(1000);
	obj.withdraw(500);
	obj.displayinfor();
}
