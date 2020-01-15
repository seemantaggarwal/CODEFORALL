#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int k;
	cin>>k;
	int arr[n];
	unordered_map<int, int> m;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
		m[arr[i]] = i;
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if(k==0)
		{
			break;
		}
		if(arr[i] < n - i)
		{
			int j = n-i;
			int temp = m.find(j)->second;
			m[arr[i]] = temp;
			m[arr[temp]]=i;
			swap(arr[i], arr[temp]);
			k--;
		}

	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i]<<" ";
	}
	return 0;
}
