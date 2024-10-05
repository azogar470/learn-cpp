//function overloading is using a single name function at multiple inputs 

#include <iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int sum(int a,int b, int c){
    return a+b+c;
}

int area(int a,int b){
    cout<<"the area of the rectangle is -"<<endl;
    return a*b;
}

int area(int a){
    cout<<"the area of the cube is -"<<endl;
    return a*a*a;
}


int main(){
    cout<<sum(1,2)<<endl;
    cout<<sum(1,2,3)<<endl;
    cout<<area(2,3)<<endl;
    cout<<area(3)<<endl;

}
