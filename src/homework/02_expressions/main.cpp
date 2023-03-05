//write include statements
#include <iostream>
#include "hwexpressions.h"

//write namespace using statement for cout

using std::cin; using std::cout;
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tax_amount, meal_with_tax, tip_rate, tip_amount, total;

	cout<<"How much did your meal cost?: "<<"\n";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	meal_with_tax = tax_amount + meal_amount;

	cout<<"What percentage would you like to tip?: "<<"\n";
	cin>>tip_rate;


	tip_amount = get_tip_amount(tip_rate, meal_with_tax);

	total = meal_with_tax + tip_amount;

	cout<<"Meal Amount: $"<<meal_amount<<"\n";
	cout<<"Sales Tax: $"<<tax_amount<<"\n";
	cout<<"Tip Amount: $"<<tip_amount<<"\n";
	cout<<"Total: $"<<total<<"\n";







	return 0;
}
