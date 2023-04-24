#include <iostream>
#include <memory>
using std::cout; using std::unique_ptr; using std::make_unique;

int main() 
{
	int num = 5;
	int* num_ptr = &num;	

	//string vector -- ptr variable new
	//very prone to bugs
	int* num_dyn = new int(10); //point to the address of num
	cout<<"Raw/legacy pointer: "<<*num_dyn<<"\n\n";
	//Use the num_dyn variable
	cout<<*num_dyn<<"\n";
	delete num_dyn; // remove the data from the heap
	
	//SMART POINNTERS
	std::unique_ptr<int> num_up = make_unique<int>(100);
	cout<<"Unique ptr: "<<*num_up<<"\n";
	//Do not have to call the delete keyword to remove data from the heap/freestore

	shared_ptr<int> num_sp = make_unique<int>(200);
	cout<<"Shared ptr: "<<*num_sp<<"\n";
	shared_ptr<int> num_sp2 = make_unique<int>;
	cout<<"Shared ptr: "<<*num_sp2<<"\n";
	shared_ptr<int> num_sp3 = make_unique<int>;
	cout<<"Shared ptr: "<<*num_sp3<<"\n";

	std::weak_ptr<int> gw;
	auto sp = std::make_shared<int> 

	return 0; 
}