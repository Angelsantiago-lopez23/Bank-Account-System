#include <iostream>
#include "Bank.h"
#include "Account.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Bank bank;
    Account accountOne;
    bank.openAccount("Jeffrey", "Abraham", 200, 200);
    accountOne = bank.openAccount("Jeffrey", "Abraham", 200, 200);
    std::cout << accountOne.getAccountNumber();
    return 0;
}