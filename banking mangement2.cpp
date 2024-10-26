#include <iostream>
using namespace std;

class accountdetails {
public:
    string AccountHolderName;
    int AccountNumber;
    char AccountType;

    void getaccountdetails() {
        cout << "\nEnter The Account Holder Name: ";
        cin >> AccountHolderName;
        cout << "\nEnter The Account Number: ";
        cin >> AccountNumber;
        cout << "\nEnter The Account Type (Type 'C' for Current or 'S' for Savings): ";
        cin >> AccountType;
    }

    void displaydetails() {
        cout << "\nAccount Holder Name: " << AccountHolderName;
        cout << "\nAccount Number: " << AccountNumber;
        cout << "\nAccount Type: " << AccountType;
    }
};

class savings : public accountdetails {
private:
    int balance;

public:
    savings() : balance(0) {}

    void savingsdeposit() {
        int deposit;
        cout << "\nEnter the Deposit Amount: ";
        cin >> deposit;
        balance += deposit;
    }

    void savingswithdrawl() {
        int withdrawl;
        cout << "\nEnter the Withdrawal Amount: ";
        cin >> withdrawl;
        if (withdrawl <= balance) {
            balance -= withdrawl;
        } else {
            cout << "\nInsufficient balance!";
        }
    }

    void savingsbalance() const {
        cout << "\nSavings Account Balance Amount: " << balance;
    }
};

class current : public accountdetails {
private:
    int balance;

public:
    current()   {
     balance=0;
     }

    void currentdeposit() {
        int deposit;
        cout << "\nEnter the Deposit Amount: ";
        cin >> deposit;
        balance += deposit;
    }

    void currentwithdrawl() {
        int withdrawl;
        cout << "\nEnter the Withdrawal Amount: ";
        cin >> withdrawl;
        if (withdrawl <= balance) {
            balance -= withdrawl;
        } else {
            cout << "\nInsufficient balance!";
        }
    }

    void currentbalance() const {
        cout << "\nCurrent Account Balance Amount: " << balance;
    }
};

int main() {
    int choice;
    accountdetails account;
    account.getaccountdetails();

    if (account.AccountType == 's' || account.AccountType == 'S') {
        savings savingsAccount;
        savingsAccount.AccountHolderName = account.AccountHolderName;
        savingsAccount.AccountNumber = account.AccountNumber;
        savingsAccount.AccountType = account.AccountType;

        while (true) {
            cout << "\nChoose Your Option:\n"
                 << "1) Deposit\n"
                 << "2) Withdraw\n"
                 << "3) Display Balance\n"
                 << "4) Display Full Details\n"
                 << "5) Exit\n"
                 << "Enter Your Choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    savingsAccount.savingsdeposit();
                    break;
                case 2:
                    savingsAccount.savingswithdrawl();
                    break;
                case 3:
                    savingsAccount.savingsbalance();
                    break;
                case 4:
                    savingsAccount.displaydetails();
                    break;
                case 5:
                    return 0;
                default:
                    cout << "\nInvalid choice, please try again.";
            }
        }
    } else if (account.AccountType == 'c' || account.AccountType == 'C') {
        current currentAccount;
        currentAccount.AccountHolderName = account.AccountHolderName;
        currentAccount.AccountNumber = account.AccountNumber;
        currentAccount.AccountType = account.AccountType;

        while (true) {
            cout << "\nChoose Your Option:\n"
                 << "1) Deposit\n"
                 << "2) Withdraw\n"
                 << "3) Display Balance\n"
                 << "4) Display Full Details\n"
                 << "5) Exit\n"
                 << "Enter Your Choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    currentAccount.currentdeposit();
                    break;
                case 2:
                    currentAccount.currentwithdrawl();
                    break;
                case 3:
                    currentAccount.currentbalance();
                    break;
                case 4:
                    currentAccount.displaydetails();
                    break;
                case 5:
                    return 0;
                default:
                    cout << "\nInvalid choice, please try again.";
            }
        }
    } else {
        cout << "\nInvalid Account Type.";
    }

    return 0;
}
