#include <iostream>
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
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		sum+=  (a[i]*pow(2,n-i-1)) -  (a[i]*pow(2,i)); 
	}
	cout<<sum;
	return 0;
}