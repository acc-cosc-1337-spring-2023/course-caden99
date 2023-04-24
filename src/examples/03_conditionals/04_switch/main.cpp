#include<iostream>
#include "switch.h"

using std::cin; using std::cout;

int main() 
{
	auto option = 0;
	cout<<"Enter menu option: ";
	cin>>option;

	cout<<menu(option)<<"\n";

	return 0;
}