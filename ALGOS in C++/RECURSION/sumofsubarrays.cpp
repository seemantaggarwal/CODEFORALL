#include<iostream>
#include<cstring>
using namespace std;
int subarrsum(int arr[], int n, int size, int max=0, int beg=0, int end=0)
{
	if(size==n)
	{
		for(int z=beg; z<=end; ++z)
			cout<<arr[z];
		return max;
	}
	int sum;
	for(int i=0; i<n; i++)
	{
		sum=0;
		for(int j=i; j<=size; ++j)
		{
			sum+=arr[j];
			if(max<sum)
			{
				max=sum;
				beg=i;
				end=j;
			}
		}
	}
	return subarrsum(arr, n, size+1 , max, beg, end);
}
int main()
{
	int n, maxsum;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; ++i)
	{
		cin>>arr[i];
	}
	maxsum= subarrsum(arr, n, 0);
	cout<<maxsum;
	return 0;
}
