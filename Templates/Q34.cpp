#include <iostream>
using namespace std;

class MaxFinder {
private:
    int a, b;  

public:
    
    MaxFinder(int x, int y) : a(x), b(y) {}

    
    friend int findMax(MaxFinder &obj);

   
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};


int findMax(MaxFinder &obj) {
    if (obj.a > obj.b)
        return obj.a;
    else
        return obj.b;
}

int main() {
    int num1, num2;

   
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

   
    MaxFinder obj(num1, num2);

   
    obj.display();

    
    int maxNumber = findMax(obj);

    
    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}

