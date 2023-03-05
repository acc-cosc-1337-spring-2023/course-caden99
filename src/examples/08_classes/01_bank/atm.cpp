//atm.cpp

#include "atm.h"
#include "checking_account.h"
using std::cout;

void display_menu()
{
    cout <<"\n\nAcc COSC Bank\n\n";
    cout<<"1-Deposit\n";
    cout<<"2-Withdraw\n"
    cout<<"3-Display Balance\n";
    cout<<"4-Exit\n"
}

void run_menu(CheckingAccount& account)
{
    auto option = 0;
    auto choice = 'n';

    do
    {
        /* code */
    } while ({/* condition */});
    
}

void handle_menu_option(int option, CheckingAccount& account)
{
    switch(option)
    {
        case 1:
            cout<<"Enter deposit amount: ";
            cin>>amount;
            account.deposit(amount);


        break;

        case2:
            cout<<"Enter deposit amount: ";
            cin>>amount;
            account.withdraw(amount);
            break;

        case3:

        break;

        case4:

        break;
    }
}