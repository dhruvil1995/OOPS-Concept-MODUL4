#include<iostream>
using namespace std;

class Bank_account{
	private:
		
		
		double account_num;
		double balance;
	
		public:
			
			Bank_account(double num,double newbalance){
			
			account_num=num;
			balance=newbalance;
	}
		deposite(double amount)
		{
			if(amount>0)
			{
				balance+=amount;
				cout<<"deposite amount :"<<amount<<endl;
			}
			else
			{
				cout<<"deposite amount must be in positive:"<<endl;
			}
		}
		
		withdraw(double amount){
			if(amount >0)
				{
					if(amount <=balance){
						balance -= amount;
						cout<<"withdraw amount :"<<amount<<endl;
						
					}
					else{
						cout<<"insuficint fund for withdraw:"<<endl;
					}
				}
				else{
					cout<<"withdraw amount must be in positive amount"<<endl;
				}
			}
		
		displayinfo(){
			cout<<"account number :"<<account_num<<endl;
			cout<<"account balance:"<<balance<<endl;
		}
};

main(){
	
	Bank_account obj(125652,500);
	
	obj.displayinfo();
	
	obj.deposite(2000);
	obj.withdraw(500);
		obj.displayinfo();
	
		
}
