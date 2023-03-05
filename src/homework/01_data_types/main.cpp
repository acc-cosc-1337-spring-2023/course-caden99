//write include statements
#include <iostream>
#include "data_types.h"
using std::cout; using std::cin;

//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;
	cin >> num;

	int result = multiply_numbers(num);
	cout<<result;

	int num1= 5;
	multiply_numbers(num1);
	cout<<result;

	


	cout<<result<<"\n"





	return 0;
}
