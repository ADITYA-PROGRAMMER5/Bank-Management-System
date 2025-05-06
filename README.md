# Bank Management System (C++)

## Overview
The Bank Management System is a terminal-based application written in C++ that simulates basic operations of a bank. It allows creation of accounts, deposits, withdrawals, balance inquiries, and displaying all stored accounts.

## Features
- Create New Account (Saving or Current)
- Deposit Funds
- Withdraw Funds
- Balance Enquiry
- Display All Accounts
- Menu-driven interface

## Requirements
- g++ or any C++ compiler
- Terminal/command-line environment

## Compilation
To compile the program:
    g++ -o bank_management bank_management.cpp

## Running
To run the compiled program:
    ./bank_management

## Menu Options
Upon execution, the following options are displayed:

    --- Bank Management System ---
    
    1. Create New Account
    2. Deposit Amount
    3. Withdraw Amount
    4. Balance Enquiry
    5. Display All Accounts
    6. Exit

## Notes
- The application uses a static array of 100 accounts (limit).
- Data is not persistent; exiting the program clears all stored information.
- Account is searched by Account Number only.
- All operations are performed in real time via standard input/output.

