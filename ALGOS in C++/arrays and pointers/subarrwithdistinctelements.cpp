#include <iostream>
#include <unordered_map>
using namespace std;
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
	int i=0;
	int j=0;
	int ans = 0;
	unordered_map<int, int> s;
	 for (int i=0; i<n; i++) 
    { 
        // Find ending point for current subarray with 
        // distinct elements. 
        while (j < n && s.find(arr[j]) == s.end()) 
        { 
            s[arr[j]]=i;
            j++; 
        } 
  
        // Calculating and adding all possible length 
        // subarrays in arr[i..j] 
        ans += ((j - i) * (j - i + 1))/2; 
  
        // Remove arr[i] as we pick new stating point 
        // from next 
        s.erase(arr[i]); 
    } 
	cout<<ans<<endl;
	return 0;
}