#include <iostream>
#include <unordered_set>
using namespace std;
bool subarrsumzer(int arr[], int n)
{
	unordered_set<int> s;
	int pre = 0;
	for (int i = 0; i < n+1; ++i)
	{
		/* code */
		pre+=arr[i];
		if(pre==0 || s.find(pre)!=s.end())
		{
			return true;
		}
		s.insert(pre);
	}
	return false;
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
	bool ans = subarrsumzer(arr, n-1);
	cout<<ans;
	return 0;
}
