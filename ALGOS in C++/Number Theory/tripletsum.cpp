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
	int input;
	cin>>input;
	int low = 0;
	int high = n;
	for(int i=0;i<n;i++)
	{
		low = i+1;
		high =n-1;
		int sum = input - arr[i];
		while(low<high)
	{
		if(arr[low]+arr[high]== sum)
		{
			cout<<arr[i]<<";" <<arr[low]<<";"<<arr[high]<<endl;
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
	
}
