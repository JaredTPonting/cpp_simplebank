#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount {
    private:
        double balance;
    
    public:
        BankAccount(double initial_balance = 0.0);

        void deposit(double amount);
        bool withdraw(double amount);
        double get_balance() const;

};

#endif //BANKACCOUNT_H