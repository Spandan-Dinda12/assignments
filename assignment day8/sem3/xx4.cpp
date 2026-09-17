/*wacpp program to create an array of employee objects and display the name and salary of each employees 
  wacpp to demonstrate a static data member that stores the total number of object created 
  wacpp using a friend function to find the largest value among the pvt data members of two objects
  wacpp using a static member function to display a common value shared by all objects
  wacpp to create an array of objects to store and display details of five students
  wacpp to demonstrate a frnd function that adds the pvt data members of two objects  */

  #include<iostream>
  #include<string>
  using namespace std;
  
  class Employee {
    private:
       string name;
       float salary;
    public:
      void setData(const string& employeeName, float employeeSalary){
       name = employeeName;
       salary = employeeSalary;
       }

       void display(){
      cout << "Name: " << name << '\t' << "Salary: " << salary << endl;
       }
    };

    int main(){
        Employee e[3];

      e[0].setData("Spandan", 85000);
      e[1].setData("Employee2", 75000);
      e[2].setData("Employee3", 65000);

      for (int i = 0; i < 3; ++i) {
         e[i].display();
      }
      return 0;
    }
  