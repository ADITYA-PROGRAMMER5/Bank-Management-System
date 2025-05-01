#include <iostream>
using namespace std; 

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