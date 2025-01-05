#include<iostream>
using namespace std;

class Rectangle{
	private:
		double length;
		double width;
		public:
			Rectangle(double l,double w){
				length=l;
				width=w;
			}
			
		double area(){
			return length*width;
		}
		double perimeter(){
			return 2*(length + width);
		}
		displayinfo(){
			cout<<"rectangle with length: "<<length<<"  width:"<<width<<endl;
			cout<<"area:"<<area()<<endl;
			cout<<"perimeter:"<<perimeter()<<endl;
		}
};
main()
{
	Rectangle obj(5,2);
	obj.displayinfo();
}
