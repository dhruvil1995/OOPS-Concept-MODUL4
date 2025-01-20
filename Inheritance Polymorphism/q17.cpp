#include<iostream>
using namespace std;
class Tringle{
	private:
		int side1;
		int side2;
		int side3;
		public:
			Tringle(int s1,int s2,int s3){
				side1=s1;
				side2=s2;
				side3=s3;
			}
			bool equilateral(){
				return (side1 == side2 && side2 == side3);
			}
			bool isosceles(){
				return (side1 == side2 || side2 == side3 || side3 == side1);
			}
			bool scalence (){
				return (side1 != side2 && side2 != side3 && side3 !=side1);
			}
			
			displayinfo(){
				if(equilateral()){
					cout<<"tringle is equilateral"<<endl;
				}
				else if(isosceles()){
					cout<<"tringle is isosceles"<<endl;
				}
				else if(scalence()){
					cout<<"tringle is scalence"<<endl;
				}
				else{
					cout<<"enter invalid tringle angle"<<endl;
				}
			}
			
};
main()
{
	double s1,s2,s3;
	
	cout<<"enter length of three side of tringle:";
	cin>>s1>>s2>>s3;
	
	Tringle obj(s1,s2,s3);
	
	obj.displayinfo();
	
	
}

