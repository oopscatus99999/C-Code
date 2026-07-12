#include <iostream>
#include "bank.hpp"

// Deposit money
void BankAccount::deposit(double amount)
{
    if (amount > 0)
    {
        balance = balance + amount;
    }
}
void BankAccount::withdraw(double amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance = balance - amount;
    }
}

double BankAccount::getBalance()
{
    return balance;
}

