//write include statements
#include <decisions.h>
#include <iostream>
#include <stdlib.h>
using std::string;
using std::cout; using std::cin;
int main()
{
	auto grade = 0;
	string result;
	int selection;

	cout<<"MAIN MENU"<<"\n";
	cout<<"1-Letter grade using if"<<"\n";
	cout<<"2-Letter grade using switch"<<"\n";
	cout<<"3-Exit"<<"\n";

	cin >> selection;

	if(selection == 1)
	{
		cout<<"What grade did you get?: ";
		cin>>grade;
		string result;
		if(grade >= 0 && grade <= 100)
		{
			result = get_letter_grade_using_if(grade);
			cout<<result<<"\n";	
		}
		else
		{
			cout<<"That number is out of range";
		}
	}
	else if(selection == 2)
	{
		cout<<"What grade did you get?: ";
		cin>>grade;
		string result;
		if(grade >= 0 && grade <= 100)
		{
			result = get_letter_grade_using_switch(grade);
			cout<<result<<"\n";	
		}
		else
		{
			cout<<"That number is out of range.";
		}
		
	}
	else if(selection == 3)
	{
		abort();
	}
	else
	{
		cout<<"That is not a selection.";
	}


}

/*

*/

