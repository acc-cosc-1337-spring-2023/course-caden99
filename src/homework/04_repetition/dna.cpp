//add include statements
#include "dna.h"
#include <iostream>
using std::string;
using std::cout; using std::cin;
//add function(s) code here

int factorial(int num)
{
    auto sum = 1;
    
    while(num > 0)
    {
        

        sum *= num;
        num--;
        
    }

    return sum;
}


int gcd(int num1, int num2)
{
    while(num1 != num2)
    {
        auto replace = num1;
        if(num1 < num2)
        {
            num1 = num2;
            num1 = replace;
        }
        else if(num1 > num2)
        
            num1 -= num2;
        
    
    }
    return num1;
}


void display_menu()
{
cout<<"1- Factorial\n";
cout<<"2- Greatest Common Divisor\n";
cout<<"3- Exit\n";

}

void run_menu()
{
    auto option = 0;

    do
    {
        display_menu();
        cout << "Enter menu option: ";
        cin >> option;

        handle_menu_option(option);

    }
    while(option >= 1 && option <=3);
}

void handle_menu_option(int choice)

{ 
    int option = 0;
    int option2= 0;
    char choice2 = 'a';

    switch (num)
    {
    case 1:

        cout << "Selected Factorial Option:  \n";
        cout << "Enter a number:  \n";
        cin >> option;
        //factorial (option);
        cout << "The factorial of the number you entered is: " << factorial(option) << "\n"; 
        break;

    case 2: 

        cout << "Selected Greatest Common Divisor Option:  \n";
         cout << "Enter 2 numbers:  \n";
        cin >> option >> option2;
       // gcd (option, option2);
        cout << "The GCD is: " << gcd (option, option2) << "\n"; 
        break;

    case 3:

        cout << "Selected Exit Option:  \n";
        cout << "Are you sure you want to exit... \n";
        cout << "y or n \n" ;
        cin >> choice2;
        break;
        
        


    default:
    cout << "Invalid Option:  \n";
    break;
    }
    if (choice2 == 'Y' || choice2 == 'y')
    {
        abort();
    }
    if (choice2 == 'N' || choice2 == 'n')
    run_menu();


}