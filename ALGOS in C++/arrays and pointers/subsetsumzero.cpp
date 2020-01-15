#include <iostream>
using namespace std;
bool issumzero(int a[], int s, int end, int sum=0)
{
	if(s>end)
	{
		return false;
	}
	if(a[s]==0)
	{
		return true;
	}
	 bool inc = issumzero(a,s+1,end,sum+a[s]);
	 bool uninc = issumzero(a,s+1,end,sum);
	if(sum + a[s] == 0)
	{
		return true;
	}
	if(inc || uninc )
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
	}
	bool iszero = issumzero(a,0,n-1);
	if(iszero)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}

	return 0;
}
