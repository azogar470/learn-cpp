#include<iostream>

using namespace std;

int main(){
    int marks;
    cout<<"enter your marks out of 100: ";
    cin>>marks;
    if(marks<33){
        cout<<"sorry to say but you are fail.";

    }
    else if(marks>100){
        cout<<"plese enter valid marks.";
    }
    else {
        cout<<"congratulation! you have passed your exam."<<endl;
    }
    

    // *******switch case**********
   
   
    switch (marks)
    {
    case 50:
        cout<<"wow you have solved 50% of exam";
        break;
    case 100:
        cout<<"you are a topper!!";
        break;
    default:
        break;
    }



    return 0;
}

