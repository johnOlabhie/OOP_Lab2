#include "bankAccount.cpp"
#include <iostream>

int main() {
    //create a bank account object. ao you say bank account the name it ala "JohnBankAcount""
    //you then parse in your values to initaise that object
    bankAccount johnBankAccount("John", 100.00);

    //this is to ptint the values in the object 
    //print the name and current balacce 
    std::cout << "Account holder: " << johnBankAccount.getCustomerName() << '\n';
    std::cout << "Starting balance: $" << johnBankAccount.getBalance() << '\n';


    //print the deposit
    //open the john bank object and call upo fucton to deposite cash
    johnBankAccount.deposit(50.00);
    std::cout << "After depositing $50.00: $"
              << johnBankAccount.getBalance() << '\n';

    //print withdarw value
    //clik on john bank object and call uoin withdraw fucntion 
    johnBankAccount.withdraw(25.00);
    std::cout << "After withdrawing $25.00: $"
              << johnBankAccount.getBalance() << '\n';

    return 0;
}
