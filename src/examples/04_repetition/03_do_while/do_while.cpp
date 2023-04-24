#include "do_while.h"

//Write code for void function prompt_user to loop until
//user opts not to continue.  



using std::cin; using std::cout;

void prompt_user()
{
    
    auto choice = 'n';

    do() // do while loop is the only while loop that needs a semi colon (by the while part tho)
    {
        cout<< "Enter y to continue , any other key to exit ?";
        cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');
}