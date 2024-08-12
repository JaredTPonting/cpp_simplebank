#include "BankAccount.h"

BankAccount::BankAccount(double initial_balance) : balance(initial_balance) {}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    }
}

bool BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        return true;
    }
    return false;
}

double BankAccount::get_balance() const {
    return balance;
}