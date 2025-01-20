#include<iostream>
using namespace std;

class Cricketer{
	private:
		string name;
		int matchesplayed;
		public:
			inputdata(string n,int m){
				name=n;
				matchesplayed=m;
			}
			displaydata(){
				cout<<"name:"<<name<<endl;
				cout<<"matches played"<<matchesplayed<<endl;
			}
			int getmatchesplayed(){
				return matchesplayed;
			}
};

class Batsman : public Cricketer{
	private:
		int totalrun;
		float avgrun;
		string bestperformance;
		public:
			inputebatsmandata(int run,string bestperformance){
				totalrun = run;
				this->bestperformance=bestperformance;
				int matchesplayed=getmatchesplayed(
				);
				if(matchesplayed !=0){
					avgrun=static_cast<float>(totalrun)/matchesplayed;
				}
				else{
					avgrun=0.0;
				}
				
			}
			displaybatsmandata(){
				cout<<"total run:"<<totalrun<<endl;
				cout<<"avg run:"<<avgrun<<endl;
				cout<<"best performance:"<<bestperformance<<endl;
			}
};
main(){
	Batsman obj;
	obj.inputdata("dhruvil",200);
	obj.inputebatsmandata(600,"180*");
	obj.displaybatsmandata();
	
}
