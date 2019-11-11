#include<iostream>
using namespace std;
int main()
{
	/* code */
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	for(int i=0;i<n;++i)
		cout<<arr[i];
	cout<<endl;
	for(int i=0; i<n-1; ++i)
	{
		if(i%2==0)
		{
			if(arr[i+1]<arr[i])
			{
				swap(arr[i], arr[i+1]);
			}
		}
		else
		{
			if(arr[i+1]>arr[i])
			{
				swap(arr[i], arr[i+1]);
			}
		}
	}
	for(int i=0;i<n;++i)
		cout<<arr[i];
	cout<<endl;
	//APPROACH 2
	for(int i=0; i<n; i=i+2)
	{
		if( i>0 && arr[i-1]>arr[i])
		{
			swap(arr[i], arr[i-1]);
		}
		if(i<=n-2 && arr[i+i]>arr[i])
		{
			swap(arr[i], arr[i+1]);
		}
	}
	for(int i=0;i<n;++i)
		cout<<arr[i];
	return 0;
}
