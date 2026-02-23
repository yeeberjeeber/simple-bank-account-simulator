#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
    string accountHolderName;
    double balance;

    public:
    BankAccount(string accountHolderName) {
        this->accountHolderName = accountHolderName;
        balance = 0;
    }

    int deposit(double amount) {
        balance = balance + amount;
        cout << "Deposited: " << balance << endl;
        return balance;
    }

    int withdraw(double amount) {
        if (balance >= amount) {
            balance = balance - amount;
            cout << "Withdrawn: " << balance << endl;
            return balance;
        } else {
            cout << "The fund amount that you wish to withdraw exceeds your current balance." << endl;
            return 0;
        }
    }

    int displayBalance() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Current Balance: " << balance << endl;
        return balance;
    }

};

int main() {
    BankAccount myAccount("Aloysius");

    myAccount.deposit(500.57);
    myAccount.withdraw(300);
    myAccount.deposit(780.57);
    myAccount.displayBalance();
}