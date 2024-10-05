#include<iostream>
using namespace std;
// int add(int a,int b){
    // return a + b;
// }


// to swap two variables we have to swap the address of the variable.
// can be done using pointers.

// void swapPointer(int* a,int* b){
//     int c = *a;
//     *a = *b;
//     *b = c;
// }
// **************alter*******************
void swapPointerRefrence(int &a,int &b){
    int c = a;
    a = b;
    b = c;
}

int main(){
    int a = 4 ,b = 5;


    cout<<"the value of a "<<a<<endl;
    cout<<"the value of b "<<b<<endl;

    // swapPointer(&a,&b);
    swapPointerRefrence(a,b);

    cout<<"the value of a "<<a<<endl;
    cout<<"the value of b "<<b<<endl;




    
    return 0;

}