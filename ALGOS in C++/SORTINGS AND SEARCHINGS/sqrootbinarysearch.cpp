#include <iostream>
using namespace std;
int main()
{
	/* code */
	int n;
	cin>>n;
	int e=n;
	int s=1;
	int ans=-1;
	while(s<=e)
	{
		int mid = (e+s)/2;
		if(mid*mid==n)
		{
			ans=mid;
			break;
		}
		else if(mid*mid<n)
		{
			s = mid+1;
			ans = mid;
		}
		else
		{
			e = mid - 1;
		}
	}
	if(ans!=-1)
	{
		cout<<ans<<endl;
	}
	int p;
	cin>>p;
	float inc = 0.1;
	for(int i =0; i<p; ++i)
	{
		while(ans*ans<n)
		{
			ans+=inc;
		}
		if(ans*ans>n)
			ans =  ans - inc;
		inc = inc/10;
	}
	cout<<float(ans);
	return 0;
}
