#include<bits/stdc++.h>
using namespace std;


main()
{
    int n;
    cin>>n;
    int a[n];
    int start =0;
    int high = n-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(start<high){
        int temp = a[start];
        a[start]= a[high];
        a[high] = temp;
        start++;
        high--;
    } 
    
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    
}
