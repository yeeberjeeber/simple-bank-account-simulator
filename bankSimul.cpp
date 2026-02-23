#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
    string accountHolderName;
    double balance;

    public:
    int deposit(double amount) {
        return balance + amount;
    }

    int withdraw(double amount) {
        if (balance != 0 && balance - amount > 0) {
            return balance - amount;
        } else {
            cout << "The fund amount that you wish to withdraw exceeds your current balance." << endl;
        }
    }

    int displayBalance(string accountHolderName) {
        return balance;
    }

};

int main() {
    BankAccount bankAccount;
    double balance = 0;


}