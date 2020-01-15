#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int m;
	cin>>m;
	int a[n], b[m];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
	}
	for (int i = 0; i < m; ++i)
	{
		/* code */
		cin>>b[i];
	}
	int k = n+m;
	if(k%2!=0)
	{
		int i=0;
		int j=0;
		k++;
		while(k--)
		{
			if(a[i]<b[j])
			{
				i++;
			}
			else
			{
				j++;
			}
		}
	if(a[i]<b[j])
		{
			cout<<a[i];
		}
	else
		{
			cout<<b[j];
		}

	}
	else
	{
		int i=0;
		int j=0;
		while(k--)
		{
			if(a[i]<b[j])
			{
				i++;
			}
			else
			{
				j++;
			}
		}
		if(a[i]<b[j])
		{
			if(a[i+1] < b[j+1])
				cout<<(a[i] + a[i+1])/2;
			else
			{
				cout<<(a[i] + b[j+1])/2;
			}
		}
		else
		{
			if(a[i+1] < b[j+1])
				cout<<(b[j] + a[i+1])/2;
			else
			{
				cout<<(b[j] + b[j+1])/2;
			}
		}
	}
	return 0;
}