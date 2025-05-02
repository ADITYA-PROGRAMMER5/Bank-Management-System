#include <iostream>
#include <string>
using namespace std;

class Account {
    private:
    int accountNumber;
    string holderName;
    char accountType;
    double balance;

    public:
    void createAccount() {
        cout<<"Enter Account Number: ";
        cin>>accountNumber;
        cin.ignore();
        cout<<"Enter Account Holder Name: ";
        getline(cin, holderName);
        cout<<"Enter Account Type ('S' = Saving, 'C' = Current): ";
        cin>>accountType;
        cout<<"Enter Holder Balance: ";
        cin>>balance;
        cout<<"\n\nNew Account Created Successfully\n\n";
    }

    void deposit(double amount) {
        balance += amount;
        cout<<"Deposit Successfull, New balance: "<<balance<<endl;
    }

    void showAccount() const {
        cout<<"\nAccount Number : "<<accountNumber;
        cout<<"\nAccount Holder Name : "<<holderName;
        cout<<"\nAccount Type : "<<(accountType == 'S'? "Saving" : "Current");
        cout<<"\nBaleance : "<<balance<<endl;
    }

    void withDraw(double amount) {
        if (amount > balance)
        {
            cout<<"Insufficient Balance.\n";
        }
        else
        {
            balance -= amount;
            cout<<"Withdram Successfull. Remaining balance : "<<balance <<endl;
        }
    }

    int getBalance() const {
        return accountNumber;
    }
};

const int max_account = 100;
Account ACC[max_account];
int totalAccount = 0;

int main () {
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
        cout<<"Enter your Choice (1-6): ";
        cin>>choice;

        switch (choice)
        {
        case 1:

            break;

        case 2:

            break;

        case 3:

            break;

        case 4:

            break;

        case 5:

            break;

        case 6:
            cout<<"Thank You for using Bank Managemnt System\n\n";
            break;
        
        default:
            cout<<"Invalid Choice! PLease Try Again\n";
        }
    } while (choice != 6);
    
return 0;
}