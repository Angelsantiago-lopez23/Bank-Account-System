//
// Created by Jeffrey Abraham on 11/4/22.
//

#ifndef BANK_ACCOUNT_SYSTEM_BANK_H
#define BANK_ACCOUNT_SYSTEM_BANK_H

#include <vector>
#include <string>
#include "Account.h"

class Bank {
    std::vector<Account> accounts;

public:
    Bank(void);

    Account openAccount(std::string, std::string, float, float);
    Account deposit(float, int);
    Account withdraw(float, int);
    std::vector<Account> getAccounts() const;
    Account findAccount(const int) const;
};


#endif //BANK_ACCOUNT_SYSTEM_BANK_H
