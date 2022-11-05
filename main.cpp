#include <iostream>
#include <vector>
#include <string>
#include "Bank.h"
#include "Account.h"

void showOptions(const std::vector<std::string>);
bool checkInput(const int, const std::vector<std::string>);
void accountName(const std::vector<Account>);

int main() {
    std::cout << "Hello, World!" << std::endl;
    Bank bank;
    Account account;
    std::vector<std::string> options;

    while(true){
        options = {"Open Account", "Withdraw", "Deposit", "Show Accounts", "Quit"};
        showOptions(options);

        int choice;
        std::cout << "Please pick an option: ";
        std::cin >> choice;

        if(checkInput(choice, options)){
            std::cout << "Invalid Input";
            break;
        }

        switch(choice){
            // Open account
            case 1: {
                std::string first_name, last_name;
                float checking, saving;

                std::cout << "Please enter first name: ";
                std::cin >> first_name;
                std::cout << "Please enter last name: ";
                std::cin >> last_name;

                std::cout << "Please enter initial checking: ";
                std::cin >> checking;
                std::cout << "Please enter initial saving: ";
                std::cin >> saving;
                bank.openAccount(first_name, last_name, checking, saving);
                break;
            }

                // Withdraw
            case 2:{
                if(bank.getAccounts().size() == 0){
                    std::cout << "No user found";
                    break;
                }

                accountName(bank.getAccounts());

                std::cout << "Please pick an option: ";
                int acNum;
                std::cin >> acNum;

                int amount;
                std::cout << "Please enter amount: ";
                std::cin >> amount;

                bank.withdraw(amount, acNum);
                break;
            }

            case 3:{
                if(bank.getAccounts().size() == 0){
                    std::cout << "No user found";
                    break;
                }

                accountName(bank.getAccounts());

                std::cout << "Please pick an option: ";
                int acNum;
                std::cin >> acNum;

                int amount;
                std::cout << "Please enter amount: ";
                std::cin >> amount;

                bank.deposit(amount, acNum);
                break;
            }

            default:
                std::cout << "Invalid Input";
                break;
        }
    }

    return 0;
}

void showOptions(const std::vector<std::string> options){
    for(int i = 1; i < options.size() + 1; i++){
        std::cout << i << ". " << options[i - 1] << '\n';
    }
}

bool checkInput(const int num, const std::vector<std::string> options){
    // Check if options is within range
    if(num > options.size() || num <= 0){
        // Not in range
        return true;
    }
    // Is in range
    return false;
}

void accountName(std::vector<Account> accounts){
    for(int i = 1; i < accounts.size() + 1; i++){
        std::cout << i << ". ";
        accounts[i - 1].accountOutput();
    }
}