//
// Created by Jeffrey Abraham on 11/4/22.
//

#include "Account.h"

Account::Account() {};

Account::Account(std::string fName, std::string lName, float cBalance, float sBalance) :
    first_name(fName), last_name(lName), checking(cBalance), saving(sBalance){};

void Account::changeStatus() {
    // This will handle the freezing and unfreezing accounts
    this->status = !this->status;
}

float Account::getChecking() const {
    return this->checking;
}

float Account::getSaving() const {
    return this->saving;
}

std::string Account::getName() const {
    return this->first_name + " " + this->last_name;
}