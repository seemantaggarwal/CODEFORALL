#include <iostream>
#include <unordered_map>
using namespace std;
int subseq(int arr[], int n)
{
	int pre = 0;
	int len= 0;
	unordered_map<int, int> m;
	for (int i = 0; i < n+1; ++i)
	{
		/* code */
		m.insert(arr[i]);
		
	}
	for (int i = 0; i < n+1; ++i)
	{
		/* code */
		if(s.find(arr[i]-1)!=s.end())
		{
			continue;
		}
		else
		{
			int count = 0;
			int x= arr[i];
			while(s.find(x)!=s.end())
			{
				count++;
				x++;
			}
			ans = max(ans,count);
		}
	}
	return count;
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
	int ans = subseq(arr, n-1);
	return 0;
}