#include <iostream>
using namespace std;
class BankAccount
{
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int number, double b);
    BankAccount();
    void inputDetails();
    void displayDetails();
    void deposit(double amount);
    void withdraw(double amount);
};
BankAccount::BankAccount(string name, int number, double b)
   {accountHolderName = name;
    accountNumber = number;
    balance = b;
}

BankAccount::BankAccount()
{
    accountHolderName = "";
    accountNumber = 1111;
    balance = 0;
}

void BankAccount::deposit(double amount)
{
    balance += amount;
    cout << "\n amount deposited successfully. New balance: " << balance;
}
void BankAccount::withdraw(double amount)
{
    if (amount > balance)
    {
        cout << "\n insufficient balance";
    }
    else
    {
        balance -= amount;
        cout << "\n amount withdrawn successfully. New balance: " << balance;
    }
} 
void BankAccount::displayDetails()
{
    cout << "\n Account Holder Name: " << accountHolderName;
    cout << "\n Account Number: " << accountNumber;
    cout << "\n Balance: " << balance;
}
int main()
{
    BankAccount account; // s1 is obj/instnace of the class students
    // account.inputDetails();
    account.displayDetails();
    // cout << "\n D or W";
    // char choice;
    // cin >> choice;
    // if(choice=='D' )
    // {
    //     double depositAmount;
    //     cout << "\n enter amount to deposit";
    //     cin >> depositAmount;
    //     account.deposit(depositAmount);
    // }
    // else if(choice=='W')
    // {
    //     double withdrawAmount;
    //     cout << "\n enter amount to withdraw";
    //     cin >> withdrawAmount;
    //     account.withdraw(withdrawAmount);
    // }
    // account.displayDetails();
    return 0;
}
