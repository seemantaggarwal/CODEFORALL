#include<iostream>
using namespace std;
int main()
{
	/* code */
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	int s=0;
	int mid=0;
	int end=n-1;
	while(mid<=end)
	{
		if(arr[mid]==0)
		{
			swap(arr[mid], arr[s]);
			s++;
			mid++;
		}
		else if(arr[mid]==1)
		{
			mid++;
		}
		else
		{
			swap(arr[mid], arr[end]);
			end--;
		}
	}
	for(int i=0;i<n;++i)
	{
		cout<<arr[i];
	}
	return 0;
}
