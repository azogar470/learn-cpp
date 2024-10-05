#include <iostream>
using namespace std;

// here we will use function prototype
int func(int a,int b);

int main(){
    int num1 ,num2;
    
    cout<<"enter the first value :"<<endl;
    cin>>num1;
    
    cout<<"enter the second value :"<<endl;
    cin>>num2;

    cout<<"the sum is "<<func(num1 , num2);
    
    }
// function prorotype
// if is written after the function is called.
int func(int a , int b){
    return a + b;
} 