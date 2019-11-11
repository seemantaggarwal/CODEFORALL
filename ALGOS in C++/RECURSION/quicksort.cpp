#include <iostream>
using namespace std;
int partition(int a[], int beg, int n)
{
	int i=beg-1;
	int j=beg;
	int pivot = a[n];
	for(;j<n;++j)
	{
		if(a[j]<=pivot)
		{
			++i;
			swap(a[j],a[i]);
		}
	}
	swap(a[i+1],a[n]);
	return i+1;
}
void quicksort(int arr[], int beg, int n)
{
	if(beg>=n)
	{
		return;
	}
	int p=partition(arr,beg,n);
	quicksort(arr,beg,p-1);
	quicksort(arr,p+1,n);
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i];
	}
	return 0;
}
