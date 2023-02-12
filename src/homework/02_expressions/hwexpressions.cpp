#include <iostream>
#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

double get_sales_tax_amount(double meal_amount)
{
	const double tax_rate = .0675;
	return meal_amount * tax_rate;
}


double get_tip_amount(double meal_amount, double tip_rate)
{
	
	return (tip_rate / 100) * meal_amount;
}


//write function code here




