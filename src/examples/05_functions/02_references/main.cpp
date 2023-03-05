#include <iostream>
using std::cout;

int main()
{
    auto num = 10;
    auto num1 = 50;
    int &num_ref = num; //num_ref is a reference variable; hollds the stack address of num
    num_ref = num1;

    cout<<"Num is: "<<num<<"\n";
    cout<<"Stack address of num: "<<&num<<"\n";

    cout<<"Num is via num_ref is: "<<num_ref<<"\n";
    cout<<"Stack address num_ref points to: "<<&num_ref<<"\n";

    num_ref = num1;

    cout<<"Num is: "<<num<<"\n";
    cout<<"Num via num_ref is: "<<num_ref<<"\n";
    cout<<"Stack address of num: "<<&num<<"\n";

    return 0;
}