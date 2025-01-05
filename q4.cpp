#include<iostream>
using namespace std;

class Circle{
	private:
		double radius;
		public:
//			Circle(double r){
//				radius=r;
//			}
			
			double area(){
			return	3.14*radius*radius;
			}
			
		double	circumfurence(){
			return	2*3.14*radius;
			}
			displayinfo(){
			
			cout<<"circle with radius:"<<radius<<endl;
			cout<<"area:"<<area()<<endl;
			cout<<"circumfurence:"<<circumfurence()<<endl;
	}
			
};
main()
{
	Circle obj(int 3);
	
	obj.displayinfo();
}
