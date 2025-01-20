#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* str;  

public:
   
    String(const char* s = "") {
        str = new char[strlen(s) + 1]; 
        strcpy(str, s);  
    }

    // Copy constructor
    String(const String& other) {
        str = new char[strlen(other.str) + 1]; 
        strcpy(str, other.str); 
    }

  
    ~String() {
        delete[] str; 
    }

   
    String operator+(const String& other) {
       
        char* newStr = new char[strlen(str) + strlen(other.str) + 1];

       
        strcpy(newStr, str);
        strcat(newStr, other.str);

       
        return String(newStr);
    }

   
    void display() const {
        cout << str << endl;
    }
};


int main() {
    String str1("Hello, ");
    String str2("World!");

    
    String str3 = str1 + str2;

   
    cout << "Concatenated String: ";
    str3.display();

    return 0;
}

