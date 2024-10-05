#include<iostream>
using namespace std;
#include<iomanip>


int main(){
   
    // int n;
    // cin>>n;
    // for (int i= 0; i <+ n; i++)
    // {
    //     for (int j = 0; j <= n; j++)
    //     {
    //        cout<<j;
    //     }
    //     cout<<endl;  
    // }
    int a = 10;
    int x = 2;
    for (int i = 0; i < 5; i++)

    {
         cout<<setw(a-2*i);
         if (i=0){
            x =1;    
        }
         
        for ( int j=0; j<x; j++)
        {       


                cout<<"*";
                cout<<setw(i*4);
            
                
                
        }
        cout<<endl;
        
    }
    



return 0;
} 