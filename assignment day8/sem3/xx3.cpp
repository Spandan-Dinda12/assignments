#include <iostream>
using namespace std;

// 1) Store five numbers in an array within a class
class Numbers {
private:
    int arr[5];

public:
    void inputNumbers() {
        cout << "Enter five numbers: " << endl;
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    void displayNumbers() {
        cout << "The numbers are: ";
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// 2) Define a member function inside a class to display student details
class Student {
private:
    string name;
    int rollNo;

public:
    void getDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

// 3) Define a member function outside a class using the scope resolution operator
class Example {
private:
    int value;

public:
    void setValue(int v);
    void showValue() const;
};

void Example::setValue(int v) {
    value = v;
}

void Example::showValue() const {
    cout << "Value = " << value << endl;
}

// 4) Calculate the area of a circle using a member function outside the class
class Circle {
private:
    double radius;

public:
    void setRadius(double r);
    double area() const;
};

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::area() const {
    const double pi = 3.14159;
    return pi * radius * radius;
}

int main() {
    Numbers n;
    n.inputNumbers();
    n.displayNumbers();

    Student s;
    s.getDetails();
    s.displayDetails();

    Example e;
    e.setValue(15);
    e.showValue();

    Circle c;
    double r;
    cout << "Enter radius of the circle: ";
    cin >> r;
    c.setRadius(r);
    cout << "Area of circle = " << c.area() << endl;

    return 0;
}
