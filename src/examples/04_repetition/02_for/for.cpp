#include "for.h"
#include<iostream>
using std::cout; using std::cin;
//Write code for function display_numbers that accepts a number and 
//displays every number that precedes(starting from 1) it in a line
//Example: display_numbers(5)
/*
RESULT:

1
2
3
4
5

*/
// no test cases for void functions
void display_numbers(int num)
{
    for(auto i=0; i < num; i++) // for(; num > 0; num--)
    {
        cout<<i+1<<"\n";

    }
}

int sum_of_squares_for(int num)
{
    auto sum = 0;

    for(auto i=0; i <= num; i++)
    {
        sum = i * i + sum;
    }

    return sum;
}

