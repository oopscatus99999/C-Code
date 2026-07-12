#include <iostream>
#include "bank.hpp"
using namespace std;

int main()
{
    BankAccount acc1;
    acc1.deposit(10000);
    acc1.withdraw(200);

    cout << "Your left over balance: " << acc1.getBalance() << endl;
}