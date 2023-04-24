//checking_account.h

#include<stdlib.h>

class CheckingAccount
{
public:
    //CheckingAccount() : CheckingAccount(0){} // "constructor delegating"
    CheckingAccount(){get_balance_from_db();}//default constructor
    CheckingAccount(int b) : balance(b) {/*empty code block*/}
    int get_balance()const{return balance;}
    void deposit(int amount);
    void withdraw(int amount);
    //int get_balance(){balance += 500; return balance;}
private:
    int balance{0};
    void get_balance_from_db();
};