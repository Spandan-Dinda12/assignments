// create a class employee input name, id and salary then display those using object

#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    string name;
    int id;
    float salary;
    void input()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "ID: ";
        cin >> id;
        cout << "Salary: ";
        cin >> salary;
    }
    void display()
    {
        cout << "Name: " << name << '\n'
             << "ID: " << id << '\n'
             << "Salary: " << salary << '\n';
    }
};

int main()
{
    Employee e1;
    e1.input();
    e1.display();

    return 0;
}
