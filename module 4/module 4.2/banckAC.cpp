#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string name;
    int account_number;
    string account_type;
    double balance;

public:
    void assign_values(string n, int acc_no, string acc_type, double bal) {
        name = n;
        account_number = acc_no;
        account_type = acc_type;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Account Type: " << account_type << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main(){
    BankAccount B;

    
}