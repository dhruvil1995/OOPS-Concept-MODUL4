#include <iostream>
using namespace std;

class SwapNumbers {
private:
    int a, b;  

public:
    
    SwapNumbers(int x, int y) : a(x), b(y) {}

   
    friend void swap(SwapNumbers &obj);  
    
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};


void swap(SwapNumbers &obj) {
    obj.a = obj.a + obj.b;  
    obj.b = obj.a - obj.b;  
    obj.a = obj.a - obj.b;  
}

int main() {
   
    SwapNumbers obj(10, 20);

    cout << "Before swapping:" << endl;
    obj.display(); 

    
    swap(obj);

    cout << "After swapping:" << endl;
    obj.display();  

    return 0;
}

