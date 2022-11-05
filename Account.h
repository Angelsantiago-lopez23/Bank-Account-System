//
// Created by Jeffrey Abraham on 11/4/22.
//

#ifndef BANK_ACCOUNT_SYSTEM_ACCOUNT_H
#define BANK_ACCOUNT_SYSTEM_ACCOUNT_H

#include <string>

class Account {
    std::string first_name, last_name;
    float checking, saving;
    int accountNumber;
    static int nextAccountNumber;

    // For freezing account
    bool status = true;
public:
    Account(void);
    Account(std::string, std::string, float, float);

    void changeStatus();
    void depositChecking(float amount);
    void depositSaving(float amount);
    void withdrawChecking(float amount);
    void withdrawSaving(float amount);
    void accountOutput();

    float getChecking() const;
    float getSaving() const;
    float getBalance() const;
    std::string getName() const;
    bool getStatus() const;
    int getAccountNumber() const;
};


#endif //BANK_ACCOUNT_SYSTEM_ACCOUNT_H
