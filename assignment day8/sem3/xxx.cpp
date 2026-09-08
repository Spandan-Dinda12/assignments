/* 1.wacp to demonstrate encapsulation using pvt data members and public member function
2. wacp to create a bank account + with a pvt bank balance and public function to deposit and display the balance
3. wacp to demonsrate abstraction using car class with a start function
4. Create an atm class that hides the internal details of withdrawing money and dispplay only the needed ones*/

#include <iostream>
using namespace std;
class Student {
private:
    int marks;
public:
    void set(int m) { marks = m; }
    void display() { cout << "Marks: " << marks; }
};
int main() {
    Student s;
    s.set(90);
    s.display();
}

#include <iostream>
using namespace std;
class Bank {
private:
    float balance = 0;
public:
    void deposit(float x) { balance += x; }
    void display() { cout << "Balance: " << balance; }
};
int main() {
    Bank b;
    b.deposit(5000);
    b.display();
}

#include <iostream>
using namespace std;
class Car {
private:
    void engine() { cout << "Engine started"; }
public:
    void start() { engine(); }
};
int main() {
    Car c;
    c.start();
}

#include<iostream>
using namespace std;
class ATM {
private:
    float balance;
public:
    ATM() { balance = 10000; }
    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance" << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrawal successful" << endl;
    }
    void displayBalance() {
        cout << "Current balance: " << balance << endl;
    }
};
int main() {
    ATM a;
    a.displayBalance();
    a.withdraw(2000);
    a.displayBalance();
    return 0;
}