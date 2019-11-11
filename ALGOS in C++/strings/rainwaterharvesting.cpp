#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n;++i)
	{
		cin>>arr[i];
	}
	int max=0;
	for(int i=0; i<n; ++i)
	{
		int j = i+1;
		int store=0;
		while(j<n && arr[i]>arr[j])
		{
			store+=arr[i] - arr[j];
			++j;
		}
		if(max<store)
		{
			max = store;
		}
	}
	cout<<max;
}