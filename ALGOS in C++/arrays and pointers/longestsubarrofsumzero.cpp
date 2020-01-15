#include <iostream>
#include <unordered_map>
using namespace std;
int subarrsumzero(int arr[], int n)
{
	int pre = 0;
	int len= 0;
	unordered_map<int, int> m;
	for (int i = 0; i < n+1; ++i)
	{
		/* code */
		pre+=arr[i];
		if(arr[i] == 0 && i==0)
		{
			len = 1;
		}
		if(pre == 0)
		{
			len = max(len, i+1);
		}
		if( m.find(pre)!=s.end())
		{
			len = max(len, i - m[pre]);
		}
		else
		{
			m[pre] = i;
		}
	}
	return len;
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
	int ans = subarrsumzero(arr, n-1);
	return 0;
}