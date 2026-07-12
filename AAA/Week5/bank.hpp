#ifndef BANK_HPP
#define BANK_HPP

class BankAccount
{
    // main file cant access to private
    private:
    double balance;

    public:
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance();
};

#endif