//REBLEM STATEMENT FIND THE SUM OF EACH SUBARRAY

#include<iostream>
using namespace std;

int main(){
    int a[3],i,z,j,sum=0;

    for ( i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
     for ( i = 0; i < 3; i++)
    {
        cout<<a[i];
    }
    
    cout<<"\n";
    for ( j = 0; j < 3; j++)
    {
        for ( z = j; z < 3; z++)
        {
            sum=sum+a[z];
            cout<<sum<<"\n";
        }
       
        sum=0;
    }
    
    cout<<"\n";
    return 0;
}