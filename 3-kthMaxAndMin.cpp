//kth max and min element
#include<bits/stdc++.h>
using namespace std;
main() {
	//can be done easily using sorting but will use a diff approach
	// min priority queue by default
	priority_queue<int> pq;
	int n;
	cin>>n;
	int a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		pq.push(a);
	}
	int k;
	cin>>k;
	k--;
	//similarly we will get kth max using priority queue as max heap
	while(k--){
		pq.pop();
	}
	cout<<pq.top()<<endl;
}
