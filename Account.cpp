//
// Created by Jeffrey Abraham on 11/4/22.
//

#include "Account.h"

Account::Account() {};

Account::Account(std::string fname, std::string lname, float cBalance, float sBalance) :
    first_name(fname), last_name(lname), checking(cBalance), saving(sBalance){}