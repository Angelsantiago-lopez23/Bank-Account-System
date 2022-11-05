#include <iostream>
#include "Bank.h"
#include "Account.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Bank bank;
    Account accountOne;
    bank.openAccount("Woodney", "Abraham", 200, 200);
    bank.openAccount("Jeffrey", "Abraham", 200, 200);
    bank.deposit(100, 1);


    return 0;
}