//problem statement
//Given an array a[] of size  n, find the max element till index i.

#include<iostream>
using namespace std;

int main(){
    int a[10],i,n,j,max=0;

    for(i=0;i<=9;++i)
    cin>>a[i];

    for(i=0;i<=9;++i)
    cout<<a[i];

    cin>>n;

    for(j=0;j<=n;j++)
    if(a[n]>=max)
    {
         max=a[n];
    }

    else
    {
        continue;
    }
    
    cout<<max <<"\n";
    return 0;
    
}

//subarray = continouse part of an array
// number of subarrays:n C 2 + n

// subsequence taking some elements from diffrent position in the array but putting them in same sequence onky in hci thry are in the array

//every subsequence is not a subarray, but every subarray is a subsequnce