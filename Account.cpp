//
// Created by Jeffrey Abraham on 11/4/22.
//

#include <iostream>
#include "Account.h"

Account::Account() {};

Account::Account(std::string fName, std::string lName, float cBalance, float sBalance) :
    first_name(fName), last_name(lName), checking(cBalance), saving(sBalance){
    Account::nextAccountNumber++;
    this->accountNumber = Account::nextAccountNumber;
};

int Account::nextAccountNumber = 0;

void Account::changeStatus() {
    // This will handle the freezing and unfreezing accounts
    this->status = !this->status;
    if(this->status){
        std::cout << "Account Open\n";
    }else{
        std::cout << "Account Closed\n";
    }
}

void Account::depositChecking(float amount) {
    // This will handle withdraw and deposit for checking
    this->checking += amount;
}

void Account::depositSaving(float amount) {
    this->saving += amount;
}

void Account::withdrawChecking(float amount) {
    this->checking -= amount;
}

void Account::withdrawSaving(float amount) {
    this->saving -= amount;
}

void Account::accountOutput() {
    std::cout << '\n';
    std::cout << "#####################################\n";
    std::cout << this->getName() << '\n';
    std::cout << "Checking: $" << this->checking << '\n';
    std::cout << "Saving: $" << this->saving << '\n';
    std::cout << "#####################################\n";
}

float Account::getChecking() const {
    return this->checking;
}

float Account::getSaving() const {
    return this->saving;
}

float Account::getBalance() const {
    return this->checking + this->saving;
}

std::string Account::getName() const {
    return this->first_name + " " + this->last_name;
}

bool Account::getStatus() const {
    return this->status;
}

int Account::getAccountNumber() const {
    return this->accountNumber;
}
