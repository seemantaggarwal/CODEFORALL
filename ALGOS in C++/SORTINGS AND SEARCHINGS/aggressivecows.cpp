#include<iostream>
#include <algorithm>
using namespace std;
int countno(int stallarr[], int stalls, int cows,int mid)
{
	int cow = 1;
	int currdist=1;
	while(currdist<stallarr[stalls-1])
	{
		if(currdist + mid <= stallarr[stalls-1])
		{
			currdist +=mid;
			cow++;
		}
		else 
		{
			currdist +=mid;
		}
	}
	return cow;

}
int assign(int stallarr[], int stalls, int cows)
{
	int e=stallarr[stalls-1] - stallarr[0];
	int s = stallarr[0];
	int finalans=0;
	int mid = 0;
	while(s<=e)
	{
		mid=(s+e)/2;
		if(countno(stallarr,stalls, cows,mid)>cows)
		{
			s=mid+1;
		}
		else if(countno(stallarr,stalls, cows,mid)<cows)
		{
			e=mid-1;
		}
		else
		{
			finalans=mid;
			e = mid-1;
		}
	}
	return finalans;
}
int main(int argc, char const *argv[])
{
	/* code */
	int stalls;
	cin>>stalls;
	int stallarr[stalls];
	int cows;
	cin>>cows;
	for(int i=0; i<stalls;++i)
	{
		cin>>stallarr[i];
	}
	sort(stallarr,stallarr+stalls);
	int ans = assign(stallarr, stalls, cows);
	cout<<ans;
	return 0;
}
