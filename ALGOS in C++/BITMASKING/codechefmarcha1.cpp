#include<iostream>
using namespace std;
int filterchars(int a[], int no, int sum)
{
	int i=0;
	int req=0;
	while(no>0)
	{
		if(no&1)
		{
			 req+=a[i];
		}
		++i;
		if(sum==req)
		{
			return 1;
		}
		no = no>>1;
	}
	if(sum==req)
	{
		return 1;
	}
	else
		return 0;
}
void gensubs(int a[],int n, int sum)
{
	for(int i=0; i<(1<<(n+1));++i)
	{
		if(filterchars(a, i, sum))
		{
			cout<<"Yes"<<endl;
			return;
		}
	}
	cout<<"No"<<endl;
}
int main(int argc, char const *argv[])
{
	/* code */
	int t;
	cin>>t;
	
	for(int j=0;j<t;++j)
	{int n;
	cin>>n;
	int sum;
	cin>>sum;
	int arr[n];
	for(int i=0; i<n; ++i)
	{
		cin>>arr[i];
	}
		gensubs(arr,n-1,sum);
	}

	return 0;
}