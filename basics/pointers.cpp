#include<iostream>
using namespace std;

int main() {
    //it is a data type which holds the address of a another data type.

    int a = 1;
    int* b = &a;

    // & ------> the address of operator
    cout<<"the address of a is "<<b<<endl;
    cout<<"the address of a is "<<&a<<endl;

    // * ------> value at that address
    cout<<"the value at the address is "<<*b;
    return 0;
    

}