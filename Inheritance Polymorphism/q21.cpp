#include <iostream>
#include <string>
using namespace std;

// Address class to store the student's address
class Address {
private:
    string street;
    string city;
    string state;
    string postal_code;

public:
    // Setter function to initialize the address
    void setAddress(const string& street, const string& city, const string& state, const string& postal_code) {
        this->street = street;
        this->city = city;
        this->state = state;
        this->postal_code = postal_code;
    }

    // Function to display the address
    void displayAddress() const {
        cout << "Address: " << street << ", " << city << ", " << state << " - " << postal_code << endl;
    }
};

// Student class to store the student's personal details and marks
class Student {
private:
    string name;
    string class_name;
    int roll_number;
    float marks;
    Address address;  // Aggregation: The student has an address

public:
    // Setter function to set student details
    void setStudentDetails(const string& name, const string& class_name, int roll_number, float marks) {
        this->name = name;
        this->class_name = class_name;
        this->roll_number = roll_number;
        this->marks = marks;
    }

    // Setter function to set address details using the Address class
    void setAddressDetails(const string& street, const string& city, const string& state, const string& postal_code) {
        address.setAddress(street, city, state, postal_code);  // Using aggregation to set the address
    }

    // Function to calculate grade based on marks
    char calculateGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 50) return 'C';
        else return 'D';
    }

    // Function to display student details
    void displayStudentInfo() const {
        cout << "Student Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << class_name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        
        // Display the address using the address object
        address.displayAddress();  // Aggregation: Display the student's address
    }
};

int main() {
    // Create a Student object
    Student student;

    // Set student details
    student.setStudentDetails("John Doe", "10th Grade", 12345, 88.5);

    // Set address details
    student.setAddressDetails("123 Main St", "Springfield", "IL", "62701");

    // Display student information including the address
    student.displayStudentInfo();

    return 0;
}

