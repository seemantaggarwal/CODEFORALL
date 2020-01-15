#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int arr[n]
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int start = 0, end = n-1;
	int ans = -1;
	while(start<=end)
	{
		int mid = (s+e)/2;
		if(key == arr[mid])
		{
			ans = mid;
			break;
		}
		if(arr[end] < arr[start])
		{
			if(arr[start] < key && arr[mid]>key)
			{
				end = mid -1;
			}
			else
			{
				start = mid +1;
			}
		}
		else if (arr[mid] < arr[start])
		{
			/* code */
			if(arr[mid] < key && arr[start]>key)
			{
				start = mid + 1;
			}
			else
			{
				end = mid-1;
			}
		}
		else
		{
			if(arr[mid] < key)
			{
				start = mid+1;
			}
			else
				{end = mid+1;}
		}

	}
	cout<<ans;
	return 0;
}