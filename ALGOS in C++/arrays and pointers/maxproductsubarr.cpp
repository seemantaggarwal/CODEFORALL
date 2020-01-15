#include <iostream>
#include <algorithm>
using namespace std;
int maxprod(int arr[], int n)
{
	int maxsofar = INT_MIN;
	int maxending = 1;
	int minending = 1;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if(arr[i]>0)
		{
			maxending = maxending * arr[i];
			minending = min(minending*arr[i], 1);
		}
		else if(arr[i]==0)
		{
			maxending =0;
			minending = 1;
		}
		else
		{
			int temp = maxending;
			maxending = minending*arr[i];
			minending = temp * arr[i];
		}
        maxsofar = max(maxending, maxsofar);
		if(maxending<=0)
		{
			maxending=1;
		}
		
	}
	return maxsofar;
}
int main(int argc, char const *argv[])
{
	
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	cout<<maxprod(arr, n)<<endl;
	return 0;
}