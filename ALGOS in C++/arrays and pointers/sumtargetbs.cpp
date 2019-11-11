#include<iostream>
#include<algorithm>
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
	    sort(arr, arr+n); 
	int sum;
	cin>>sum;
	int low = 0;
	int high = n;
	while(low<high)
	{
		if(arr[low]+arr[high]== sum)
		{
			cout<<arr[low]<<";"<<arr[high]<<endl;
			low++;
			high--;
		}
		else if(arr[low]+arr[high]<sum)
		{
			low++;
		}
		else
		{
			high--;
		}
	}
}
