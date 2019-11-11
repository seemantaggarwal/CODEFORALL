#include<iostream>
using namespace std;
int main()
{
	/* code */
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; ++i)
	{
		cin>>arr[i];
	}
	int len=0;
	int i=0;
	int curr=0;
	while(i<n-1)
	{
		curr = 0;
		if(arr[i]<arr[i+1])
		{
			while(arr[i]<arr[i+1])
			{
				curr++;
				++i;
			}	
			if(arr[i]>=arr[i+1])
			{
				while(arr[i]>arr[i+1])
				{
					curr++;
					++i;
				}
			}
		}
		else
		{
			++i;
		}
		if(curr>len)
		{
			len = curr;
		}
		
	}
	cout<<len;
	return 0;
}
