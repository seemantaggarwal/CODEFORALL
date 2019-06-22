#include<iostream>
using namespace std;
int main()
{
	int n; 
	cin>>n;
	int val;
	for(int i=0; i<n; ++i)
	{
		val=1;
		for(int j=i; j<n; ++j)
		{
			cout<<" ";
		}
		for(int x=0; x<=i; ++x)
		{
			cout<<val;
			val = val * (i - x) / (x + 1);
		}
		cout<<endl;
	}
}
