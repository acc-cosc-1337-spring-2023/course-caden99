#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	auto hours = 0;

	cout<<"Enter hours: ";
	cin>>hours;

	auto overtime = get_is_over_time(hours);

	if(overtime == true)
	{
		cout<<"Qualify for overtime.\n";
	}

	auto even = false;
	auto value = 0;
	cout <<"Enter a number: ";
	cin>>value;

	even = is_even(value);

	if(even)
	{
		cout<<value<<" is even\n";
	}
	else
	{
		cout<<"is odd";
	}
	


	//create a bool variable named even
	//create an int variable named value

	//prompt user for a keyboard number
	//assign the number to the value variable

	//call the is_even function with value as its argument
	//and assign its return value to the even variable
	

	//display even if number is even


	return 0;
}
