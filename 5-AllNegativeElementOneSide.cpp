//question is to bring all nregative element to ne side of array 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int in = 0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			int temp = a[i];
			a[i] = a[in];
			a[in]= temp;
			in++;
		}
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
