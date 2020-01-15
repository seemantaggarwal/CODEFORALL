#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int t;
	cin>>t;
	while(t--)
	{

	int n;
	cin>>n;
	int cost[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>cost[i];
	}
	int petrol[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>petrol[i];
	}
	int ans = cost[0]*petrol[0];
	int j=0;
	for (int i = 1; i < n; ++i)
	{
		/* code */
		if(cost[i] > cost[j])
		{
			ans=ans + (petrol[i]*cost[j]);
		}
		else
		{
			j=i;
			ans=ans + (petrol[i]*cost[j]);
		}
	}
	cout<<ans<<endl;
	}
	return 0;
}