//aritmetic array:
//input and output given with time constaints.

#include<iostream>
#include "bits/stdc++.h"
using namespace std;

int main(){
    int a[10],i,y=2,pd,cpd,maxans=2,ans,j;

    for ( i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
     for ( i = 0; i < 10; i++)
    {
        cout<<a[i];
    }
    cout<<"\n";

    for(i=1;i<9;i++)
    {
        pd=a[i]-a[i-1];
        cpd=a[i+1]-a[i];
        if (cpd==pd)
        {
            y++;
            ans=y;
        }
        else
        {
            y=2;
        }
        maxans=max(maxans,ans);
        
    }
        cout<<maxans;
    cout<<"\n";

}