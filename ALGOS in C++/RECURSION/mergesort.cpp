#include <iostream>
using namespace std;
void merge(int a[], int s, int e)
{
	int mid=(s+e)/2;
	int i=s;
	int j =mid+1;
	int k=s;
	int temp[e+1];
	while(i<=mid && j<=e )
	{
		if(a[i]<a[j])
		{
			temp[k]=a[i];
			++i;
		}
		else
		{
			temp[k]=a[j];
			++j;
		}
		++k;
	}
		while(i<=mid)
		{
			temp[k]=a[i];
			++i;
			++k;
		}
		while(j<=e)
		{
			temp[k]=a[j];
			++j;
			++k;
		}
	for(int i=s;i<=e;++i)
	{
		cout<<temp[i];
		a[i]=temp[i];
	}
}
void mergesort(int arr[], int n, int beg)
{
	if(beg>=n)
	{
		return;
	}
	 int mid=(n+beg)/2;
	 mergesort(arr,n,mid+1);
	 mergesort(arr,mid,beg);
	 merge(arr,beg,n);
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
	mergesort(arr,n-1,0);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i];
	}
	return 0;
}
