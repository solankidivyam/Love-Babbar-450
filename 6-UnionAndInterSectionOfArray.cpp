//Question is to find the union and intersection of two sorted array
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int j=0;j<n;j++)
	cin>>b[j];
	//intersection
	cout<<"Intersection"<<endl; 
	int i=0,j=0;
	while (i < n && j < n) { 
        if (a[i] < b[j]) 
            i++; 
        else if (b[j] < a[i]) 
            j++; 
        else 
        { 
            cout << a[j] << " "; 
            i++; 
            j++; 
        } 
    } 
	i=0;
	j=0;
	cout<<endl;
	//union
	cout<<"Union"<<endl;
	while(i<n  && j<n){
		if(a[i]<b[j]){
			cout<<a[i]<<" ";
			i++;
		}
		else if(a[i]>b[j]){
			cout<<b[j]<<" ";
			j++;
		}
		else{
			cout<<a[i]<<" ";
			j++;
			i++;
		}
	}
	while(i<n){
		cout<<a[i]<<" ";
		i++;
	}
	while(j<n){
	cout<<b[j]<<" ";
	j++;
}
	
}
