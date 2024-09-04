#include<iostream>
using namespace std;

int main(){
    int a=1, b=4;
    // numeric operators
    cout<<"a+b = "<<a+b<<endl;
    cout<<"a-b = "<<a-b<<endl;
    cout<<"a*b = "<<a*b<<endl;
    cout<<"a/b = "<<a/b<<endl;
    cout<<"a%b = "<<a%b<<endl;
    cout<<"a++ = "<<a++<<endl;
    cout<<"a-- = "<<a--<<endl;
    cout<<"b++ = "<<b++<<endl;
    cout<<"b-- = "<<b--<<endl;

    // < , > == <= >=
    cout<<"a==b = "<<(a==b)<<endl;
    cout<<"a>b = "<<(a>b)<<endl;
    cout<<"a<b = "<<(a<b)<<endl;
    cout<<"a<=b = "<<(a<=b)<<endl;
    cout<<"a>=b = "<<(a>=b)<<endl;
    cout<<"a!=b = "<<(a!=b)<<endl;

    //float, double.
    cout<<"the size of 10.3 is "<<sizeof(10.3)<<endl;
    cout<<"the size of 10.3f is "<<sizeof(10.3f)<<endl;
    cout<<"the size of 10.3F is "<<sizeof(10.3F)<<endl;
    cout<<"the size of 10.3L is "<<sizeof(10.3L)<<endl;
    cout<<"the size of 10.3l is "<<sizeof(10.3l)<<endl;

    //to fix the value of a variable.
    const int fixed = 1;

    
   







    return 0;
}