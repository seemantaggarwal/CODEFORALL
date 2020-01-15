#include<iostream>
#include <algorithm>
using namespace std;
#define ll long long int
bool countno(ll stallarr[], ll stalls, ll cows,ll mid)
{
	ll cow = 1;
	ll i=0, start=0;
	while(i<stalls)
	{
		if(stallarr[i]- stallarr[start]>=mid)
		{
			cow++;
			start = i;
			i++;
		}
		else 
		{
			i++;
		}
		if(cow>cows)
		{
			return true;
		}
	}
	return false;

}
ll assign(ll stallarr[], ll stalls, ll cows)
{
	ll e=stallarr[stalls-1] - stallarr[0];
	ll s = 0;
	ll finalans=0;
	ll mid = 0;
	while(s<=e)
	{
		mid=(s+e)/2;
		if(countno(stallarr,stalls, cows,mid))
		{
			finalans=mid;
			s=mid+1;
		}
		else 
		{
			e=mid-1;
		}
	}
	return finalans;
}
int main(int argc, char const *argv[])
{
	/* code */
	ll stalls;
	cin>>stalls;
	ll stallarr[stalls];
	ll cows;
	cin>>cows;
	for(ll i=0; i<stalls;++i)
	{
		cin>>stallarr[i];
	}
	sort(stallarr,stallarr+stalls);
	ll ans = assign(stallarr, stalls, cows);
	cout<<ans;
	return 0;
}
