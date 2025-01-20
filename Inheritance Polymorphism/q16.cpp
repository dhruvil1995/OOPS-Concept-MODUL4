#include<iostream>
using namespace std;

class Bank_account{
	private:
		int number;
		double balance;
		public:
			Bank_account(int n,double b){
				number =n;
				balance =b;
			}
			deposite(double amount){
				if(amount>0){
					balance += amount;
					cout<<"amount diposite:"<<amount<<endl;
				}
				else
				{
					cout<<"invalid deposite amount:"<<endl;
				}
				
			}
			withdraw(double amount){
				if(amount>0  && amount<=balance )
				{
					balance -= amount;
					cout<<"withdraw:"<<amount<<endl;
				}
				else if(amount >balance){
					cout<<"insufficant amount"<<endl;
					
				}
				else{
					cout<<"invalid withdraw amount"<<endl;
				}
			}
			displayinfo(){
				cout<<"account number:"<<number<<endl;
				cout<<"balance:"<<balance<<endl;
			}
};
main()
{
	Bank_account obj(1256,5000);
	
	obj.displayinfo();
	
	obj.deposite(500);
	obj.displayinfo();
	
	obj.withdraw(100);
	obj.displayinfo();
	
}
