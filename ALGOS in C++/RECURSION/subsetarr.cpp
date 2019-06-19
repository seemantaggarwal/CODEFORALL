#include<iostream>
using namespace std;
void subsets(int arr[], int n, int beg, int ans[], int index)
{
	if(beg==n)
	{
		for(int i=0; i<index; ++i)
		{
			cout<<ans[i];
		}
		cout<<endl;
		return;
	}
	ans[index]=arr[beg];
	subsets(arr, n, beg+1, ans, index+1);
	subsets(arr, n, beg+1, ans, index);
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
	int ans[n];
	subsets(arr, n, 0, ans, 0);
}
