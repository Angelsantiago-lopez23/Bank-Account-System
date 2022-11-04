//
// Created by Jeffrey Abraham on 11/4/22.
//

#include "Bank.h"
#include "Account.h"

Bank::Bank() {};

Account Bank::openAccount(std::string fName, std::string lName, float cBalance, float sBalance) {
    Account account(fName, lName, cBalance, sBalance);
    this->accounts.push_back(account);
    return account;
}
