//
// Created by Jeffrey Abraham on 11/4/22.
//

#ifndef BANK_ACCOUNT_SYSTEM_ACCOUNT_H
#define BANK_ACCOUNT_SYSTEM_ACCOUNT_H

#include <string>

class Account {
    std::string first_name, last_name;
    float checking, saving;

    // For freezing account
    bool status = true;
public:
    Account(void);
    Account(std::string, std::string, float, float);

    void changeStatus();

    float getChecking() const;
    float getSaving() const;
    std::string getName() const;
};


#endif //BANK_ACCOUNT_SYSTEM_ACCOUNT_H