#include<iostream>
using namespace std;
void swap(int *a, int *b)
{   if(a==b)
	{
		return;
	}
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
void bubblesort(int arr[], int n)
{
	for(int i=0; i<n-1; ++i)
	{
		if(arr[i]>arr[i+1])
		{
			swap(&arr[i], &arr[i+1]);
		}
		bubblesort(arr, n-1);
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; ++i)
	{
		cin>>arr[i];
	}
	bubblesort(arr, n);
	for (int i = 0; i <n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
