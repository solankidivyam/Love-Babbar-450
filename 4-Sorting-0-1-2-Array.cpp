//sorting an array with element only contain 0,1,2
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
    int a[n];
    int c[3];
    for(int i=0;i<3;i++)
    c[i]=0;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	c[a[i]]++;
	}
	int ele=0 ;
	int k=0;
	int in=0;
	while(1)
	{
		for(int i=0;i<c[k];i++)
		{
			a[in] = ele; 
			in++;
		}
		ele++;
		k++;
		if(k==3)
		break;
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
}
