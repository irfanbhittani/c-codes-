#include <iostream>
using namespace std;

// Base Class: Account
class Account {
protected:
    int accountNumber;
    double balance;

public:
    // Constructor
    Account(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    // Display account details
    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Derived Class: SavingsAccount
class SavingsAccount : public Account {
private:
    double interestRate;

public:
    // Constructor
    SavingsAccount(int accNo, double bal) : Account(accNo, bal) {
        interestRate = 3.0; // 3%
    }

    // Display details
    void displaySavingsAccount() {
        cout << "---- Savings Account Details ----" << endl;
        displayAccount();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// Derived Class: CurrentAccount
class CurrentAccount : public Account {
private:
    double interestRate;

public:
    // Constructor
    CurrentAccount(int accNo, double bal) : Account(accNo, bal) {
        interestRate = 0.0; // 0%
    }

    // Display details
    void displayCurrentAccount() {
        cout << "---- Current Account Details ----" << endl;
        displayAccount();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// Main function for testing
int main() {
    // Create Savings Account
    SavingsAccount s1(1001, 5000.0);
    s1.displaySavingsAccount();

    cout << endl;

    // Create Current Account
    CurrentAccount c1(2001, 10000.0);
    c1.displayCurrentAccount();

    return 0;
}