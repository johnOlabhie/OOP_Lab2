#include <iostream>
using namespace std;

class bankAccount {
private:
    std::string customerName;
    double balance;

public:
    bankAccount(std::string customerName, double balance)
        : customerName(customerName), balance(balance) {}

    void setCustomerName(std::string customerName) {
        this->customerName = customerName;
    }

    std::string getCustomerName() const {
        return customerName;
    }

    void setCustomerBalance(double balance) {
        this->balance = balance;
    }

    double getBalance() const {
        return balance;
    }

    void withdraw(double amount) {
        balance -= amount;
    }

    void deposit(double amount) {
        balance += amount;
    }
};