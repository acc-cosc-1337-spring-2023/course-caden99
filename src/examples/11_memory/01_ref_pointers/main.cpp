#include "ref_pointers.h"
#include<iostream>

int main() 
{
	auto num = 5;
	int *num_ptr = &num;//create and assign address to point to
	cout<<"Adrdress num_ptr points to: " <<num_ptr<<"\n";
	cout<<"Value of num: "<<num<<"\n";
	cout<<"Address of num: "<<&num<"\n";

	*num_ptr = 10;
	cout<<"Value of num: "<<num<<"\n";

	auto num1 = 10;
	num_ptr = &num1; //assign address to point to
	cout<<"Address of num1: "<<&num<<"\n";
	cout<<"Address num_ptr points to: "<<num_ptr<<"\n";
	cout<<"Value at address that num_ptr points to: "<<*num_ptr<<"\n";
	cout<<"Value at address that num_ptr points to: "<<*num_ptr<<"\n";

	ref_ptr_params(num1, &num);
	


	return 0;
}