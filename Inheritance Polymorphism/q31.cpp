#include<iostream>
using namespace std;

class Matrix{
	private:
		int arr[100];
		int size;
		public:
			Matrix(int s){
				size=s;
			}
			inpute(){
				cout<<"enter"<<size<<"element matrix:";
				for(int i=0;i<size;i++){
					cin>>arr[i];
					
				}
			}
			display() const{
			for(int i=0;i<size;i++){
				cout<<arr[i]<<" ";
				
			}
			cout<<endl;
			
			}
			Matrix operator +(const Matrix& m){
				Matrix temp(size);
				for(int i=0;i<size;i++){
					Matrix temp(size);
					for(int i=0;i<size;i++){
						temp.arr[i]=this->arr[i]+m.arr[i];
					}
					return temp;
				}
			}
};
main(){
	int n;
	cout<<"enter the size of matrix:";
	cin>>n;
	
	Matrix m1(n),m2(n);
	
	cout<<"matrix1:"<<endl;
	m1.inpute();
	
	cout<<"matrix2:"<<endl;
	m2.inpute();
	
	cout<<"matrix1:";
	m1.display();
	cout<<"matrix2:";
	m2.display();
	
	Matrix reuslt=m1+m2;
	
	cout<<"result of matrix addition:";
	reuslt.display();
}
