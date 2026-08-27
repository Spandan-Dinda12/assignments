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

#include <iostream>
using namespace std;
   
    class Car
    {
        public:
        string brand;
        int price;

        void input()
        {
            cout<<'Name of brand';
            cin>>brand;
            cout<<'Price';
            cin>>price;
        }
        void display()
        {
            cout<<'Name of brand: '<< brand << '\n'
                <<'Price: '<< price << '\n';
        }
    };  
        int main(){
            Car c1;
            c1.input();
            c1.display();
            return 0;
        }