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
	int res=0;
	for(int i=0;i<n;++i)
	{
		res=res^arr[i];
	}
	int i=1;
	int temp=res;
	while(temp>0)
	{
		if(temp&1)
		{
			break;
		}
		++i;
		temp=temp>>1;
	}
	int mask = 1<<i;
	int first = 0;
	for(int i=0;i<n;++i)
	{
		if(mask&arr[i])
		{
			first = first ^ arr[i];
		}
	}
	int second = first^res;
	cout<<first<<" "<<second;
}
