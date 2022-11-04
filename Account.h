//
// Created by Jeffrey Abraham on 11/4/22.
//

#ifndef BANK_ACCOUNT_SYSTEM_ACCOUNT_H
#define BANK_ACCOUNT_SYSTEM_ACCOUNT_H

#include <string>

class Account {
    std::string first_name, last_name;
    float checking, saving;
public:
    Account(void);
    Account(std::string, std::string, float, float);
};


#endif //BANK_ACCOUNT_SYSTEM_ACCOUNT_H
