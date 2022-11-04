//
// Created by Jeffrey Abraham on 11/4/22.
//

#include <iostream>
#include "Bank.h"
#include "Account.h"

Bank::Bank() {};

Account Bank::openAccount(std::string fName, std::string lName, float cBalance, float sBalance) {
    Account account(fName, lName, cBalance, sBalance);
    std::cout << "Account Created\n";
    this->accounts.push_back(account);
    return account;
}

std::vector<Account> Bank::getAccounts() const {
    return this->accounts;
}

Account Bank::findAccount(const int acNum) const {
    for(auto member: this->accounts){
        std::cout << member.getAccountNumber() << std::endl;
        if(member.getAccountNumber() == acNum){
            std::cout << "Account Found\n";
            return member;
        }
    }
    std::cout << "Account could not be found\n";
}