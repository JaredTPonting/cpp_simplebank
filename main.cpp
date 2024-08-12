#include <iostream>
#include "BankAccount.h"

int main() {
    BankAccount account(100.00);

    std::cout << "Initial balance: £" << account.get_balance() << std::endl;

    account.deposit(50.00);
    std::cout << "After depoositing £50, balance: £" << account.get_balance() << std::endl;

    if (account.withdraw(30.0)) {
        std::cout << "After withdrawing $30, balance: $" << account.get_balance() << std::endl;
    } else {
        std::cout << "Withdrawal failed. Insufficient balance." << std::endl;
    }

    if (account.withdraw(150.0)) {
        std::cout << "After withdrawing $150, balance: $" << account.get_balance() << std::endl;
    } else {
        std::cout << "Withdrawal failed. Insufficient balance." << std::endl;
    }

    return 0;
}