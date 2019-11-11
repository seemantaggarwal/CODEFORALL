#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	int e=n-1;
	int s=0;
	int num;
	cin>>num;
	int ans=-1;
	while(s<=e)
	{
		int mid = (e+s)/2;
		if(arr[mid]==num)
		{
			ans=mid;
			e = mid-1;
		}
		else if(arr[mid]<num)
		{
			s = mid+1;
		}
		else
		{
			e = mid - 1;
		}
	}
	if(ans!=-1)
	{
		cout<<arr[ans]<<" "<<ans;
	}
	else
	{
		cout<<"not found";
	}
	e=n-1;
	s=0;
	while(s<=e)
	{
		int mid = (e+s)/2;
		if(arr[mid]==num)
		{
			ans=mid;
			s = mid+1;
		}
		else if(arr[mid]<num)
		{
			s = mid+1;
		}
		else
		{
			e = mid - 1;
		}
	}
	if(ans!=-1)
	{
		cout<<arr[ans]<<" "<<ans;
	}
	else
	{
		cout<<"not found";
	}
}
