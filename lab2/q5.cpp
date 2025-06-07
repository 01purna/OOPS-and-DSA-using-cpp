/*
Define a class named ‘Bank Account’ to represent following members
Data members:-
• Account Number
• Name of Depositor
• Account Type
• Balance Amount
Member functions:
• Initialize members
• Deposit Amount
• Withdraw Amount
• Display Balance
*/
#include <iostream>
using namespace std;
class BankAccount {
    private:
    int accountNumber;
    string name;
    string accountType;
    double balance;
    public:
    void initialize() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Name of Depositor: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Account Type: ";
        getline(cin, accountType);
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }
    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "----------------------------------------" << endl;
        cout << amount<<" Amount has been Deposited: " << endl;
    }
    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "----------------------------------------" << endl;
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "----------------------------------------" << endl;
            cout << amount << " Amount has been Withdrawn: " << endl;
        }
    }
    void displayBalance() {
        cout << "----------------------------------------" << endl;
        cout << "Account Details:" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name of Depositor: " << name << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance Amount: " << balance << endl;
    }
};
int main(){
    BankAccount a;
    a.initialize();
    cout << "Welcome to the Bank Account Management System!" << endl;
    cout << "your account has been found Account Management System!" << endl;
    while(1){
        cout<<endl;
        cout << "----------------------------------------" << endl;
    cout << "Please choose an option:" << endl;
    cout << "1. Deposit Amount" << endl<<"2. Withdraw Amount" << endl<< "3. Display Balance" << endl<< "4. Exit" << endl;
    int choice;
    cin >> choice;
        switch (choice) {
            case 1:
                a.deposit();
                break;
            case 2:
                a.withdraw();
                break;
            case 3:
                a.displayBalance();
                break;
            case 4:
                cout << "Exiting..." << endl;
                exit(0);
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;

}