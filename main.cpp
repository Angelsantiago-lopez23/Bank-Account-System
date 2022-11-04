#include <iostream>
#include "Bank.h"
#include "Account.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Bank bank;
    Account accountOne;
    bank.openAccount("Woodney", "Abraham", 200, 200);
    bank.openAccount("Jeffrey", "Abraham", 200, 200);
    accountOne = bank.findAccount(1);
    std::cout << accountOne.getName();

    return 0;
}