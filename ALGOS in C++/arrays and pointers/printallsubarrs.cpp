#include <iostream>
using namespace std;
void printallsub(int arr[], int n, int start, int end)
{
	if(start>end)
	{
		return;
	}
	for (int i = start; i <= end; ++i)
	{
		/* code */
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	printallsub(arr, n, start+1, end);
	printallsub(arr, n ,start, end-1);
	return;
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
	printallsub(arr,n,0,n-1);
	return 0;
}
