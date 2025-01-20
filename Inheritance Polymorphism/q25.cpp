	#include<iostream>
	using namespace std;
	
	class Shape{
		protected:
			float length;
			float width;
			public:
				Shape(float l,float w){
					length = l;
					width= w;
					
				}
	};
	class Rectangle:public Shape{
		public:
			Rectangle (float l,float w) : Shape(l,w){
				
			}
			float area(){
				return length * width;
			}
			
	};
	main(){
		Rectangle obj(10,5);
		cout<<"area of rectangle :"<<obj.area()<<endl;
	}
