#include<iostream>
using namespace std;
int arraysum(int arr[], int n)
{
	if(n<1)
		return 0;
	else
		return (arr[n-1]+arraysum(arr,  n-1));
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum= arraysum(arr,n);
	cout<<sum;
}
