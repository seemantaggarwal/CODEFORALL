#include<iostream>
using namespace std;
bool isValid(int arr[], int n, int m, int mid)
{
	int students=1;
	int currpage=0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if(currpage+ arr[i]>mid)
		{
			currpage=arr[i];
			students++;
			if(students>m)
			{
				return false;
			}
		}
		else
		{
			currpage+=arr[i];
		}
	}
	return true;
}
int binarysearchbooks(int arr[], int n, int m, int total )
{
	int start=arr[n-1];
	int end=total;
	int finalans=start;
	while(start<=end)
	{
		int mid= (start+end)/2;
		if(isValid(arr, n, m ,mid))
		{
			finalans=mid;
			end=mid-1;
		}
		else
		{
			start= mid+1;
		}
	}
	return finalans;
}
int main()
{
	int n, total=0;
	cin>>n;	//number of books
	int arr[n];	//number of pages in the books
	int m; //number of students
	cin>>m;
	for(int i=0; i<n; ++i)
	{
		cin>>arr[i];
	}
	for(int j=0;j<n;++j)
	{
		total+=arr[j];
	}
	int ans=binarysearchbooks(arr, n ,m , total);
	cout<<endl;
	cout<<"no of pages are:"<<ans;
}
