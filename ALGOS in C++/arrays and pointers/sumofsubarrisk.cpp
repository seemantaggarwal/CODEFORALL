#include <iostream>
#include <unordered_map>
using namespace std;
int subarrsumk(int arr[], int n, int k)
{
	int pre = 0;
	int len= 0;
	unordered_map<int, int> m;
	for (int i = 0; i < n+1; ++i)
	{
		/* code */
		pre+=arr[i];
		if(pre == k)
		{
			len = max(len, i+1);
		}
		if(pre == 0)
		{
			
		}
		if( m.find(pre - k)!=s.end())
		{
			len = max(len, i - m[pre - k]);
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
	cin>>k;
	int k;
	int ans = subarrsumk(arr, n-1, k);
	return 0;
}