#include <iostream>
#include <algorithm>
using namespace std;
void bubblesort(int a[], int n)
{
	if(n==1)
	{
		return;
	}
	for(int i=0; i<=n-2; ++i)
	{
		if(a[i]>a[i+1])
		{
			swap(arr[i],arr[i+1]);
		}
	}
	bubblesort(a,n-1);
}
void bubblesortrec(int arr[], int n, int j)
{
	if(n==1)
	{
		return 1;
	}
	if(j==n-1)
	{
		bubblesortrec(arr,0,n-1);
	}
	if(a[j]>a[j+1])
	{
		swap(a[j], a[j+1]);
	}
	bubblesortrec(a,j+1,n);
	return;

}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	bubblesort(arr,n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i];
	}
	return 0;
}