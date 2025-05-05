#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    int accountNumber;
    string holderName;
    char accountType;
    double balance;

public:
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cin.ignore();
        cout << "Enter Account Holder Name: ";
        getline(cin, holderName);
        cout << "Enter Account Type ('S' = Saving, 'C' = Current): ";
        cin >> accountType;
        cout << "Enter Holder Balance: ";
        cin >> balance;
        cout << "\n\nNew Account Created Successfully\n\n";
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposit Successfull, New balance: " << balance << endl;
    }

    void showAccount() const
    {
        cout << "\nAccount Number : " << accountNumber;
        cout << "\nAccount Holder Name : " << holderName;
        cout << "\nAccount Type : " << (accountType == 'S' ? "Saving" : "Current");
        cout << "\nBaleance : " << balance << endl;
    }

    void withDraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient Balance.\n";
        }
        else
        {
            balance -= amount;
            cout << "Withdram Successfull. Remaining balance : " << balance << endl;
        }
    }

    int getAccountNumber() const
    {
        return accountNumber;
    }
};

const int max_account = 100;
Account ACC[max_account];
int totalAccount = 0;

void createNewAccount()
{
    if (totalAccount >= max_account)
    {
        cout << "Cant create more Account. Max limit reached";
        return;
    }
    ACC[totalAccount].createAccount();
    totalAccount++;
};

void displayAllAccount()
{
    if (totalAccount == 0)
    {
        cout << "No Account to display";
        return;
    }
    for (int i = 0; i < totalAccount; ++i)
    {
        ACC[i].showAccount();
        cout << "-----------------------------------\n";
    }
}

Account *findAccount(int accountNumber)
{
    for (int i = 0; i < totalAccount; ++i)
    {
        if (ACC[i].getAccountNumber() == accountNumber)
        {
            return &ACC[i];
        }
    }
}

void depositAmount()
{
    int accountNumber;
    double amount;
    cout << "Enter your account number : ";
    cin >> accountNumber;
    Account *ACC = findAccount(accountNumber);
    if (ACC)
    {
        cout << "Enter Amount to Deposit: ";
        cin >> amount;
        ACC->deposit(amount);
    }
    else
    {
        cout << "Account not found.\n";
    }
}

void withdrawAmount()
{
    int accountNumber;
    double amount;
    cout << "Enter your account number : ";
    cin >> accountNumber;
    Account *ACC = findAccount(accountNumber);
    if (ACC)
    {
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;
        ACC->withDraw(amount);
    }
    else
    {
        cout << "Account not found.\n";
    }
}

void balanceEnquiry()
{
    int accountNumber;
    cout << "\nEnter Account Number: ";
    cin >> accountNumber;
    Account *ACC = findAccount(accountNumber);
    if (ACC)
    {
        ACC->showAccount();
    }
    else
    {
        cout << "Account not found.\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- Bank Management System ---\n\n";
        cout << "1. Create New Account\n";
        cout << "2. Deposit Amount\n";
        cout << "3. Withdraw Amount\n";
        cout << "4. Balance Enquiry\n";
        cout << "5. Display All Accounts\n";
        cout << "6. Exit\n";
        cout << "Enter your Choice (1-6): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            createNewAccount();
            break;

        case 2:
            depositAmount();
            break;

        case 3:
            withdrawAmount();
            break;

        case 4:
            balanceEnquiry();
            break;

        case 5:
            displayAllAccount();
            break;

        case 6:
            cout << "Thank You for using Bank Managemnt System\n\n";
            break;

        default:
            cout << "Invalid Choice! PLease Try Again\n";
        }
    } while (choice != 6);

    return 0;
}