#include <iostream>
using namespace std;
int coinmax(int a[], int s, int e, int sum=0)
{
	if(s>e){
		return sum;
	}
	if(a[s]>=a[e] && (e+s)%2!=0)
	{
	    return coinmax(a,s+1,e,sum + a[s]);
	}
	else if(a[s]<a[e] && (e+s)%2!=0)
	{ 
		return coinmax(a,s,e-1,sum+ a[e]);
	}
	else if(a[s]>a[e] )
	{
	
	    return coinmax(a,s+1,e,sum);
	}
	else
	{
		
		return coinmax(a,s,e-1,sum);
	}

}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
	}
	int max = coinmax(a,0,n-1);
	cout<<max;
	return 0;
}
