#include <iostream>

using std::cout;

int main()
{
    auto num = 5;
    auto num1 = 5.5;
    cout<<"Size in bytes: "<< sizeof(num)<<"\n";
    cout<<"Size in bytes double: "<< sizeof(num1)<<"\n";
    
    num = 2147483647; // 2^31-1 max int value
    cout<<"Max value is: "<<num<<"\n";
    num+= 1;
    cout<<"Num is: "<<num<<"\n";
    return 0;
}