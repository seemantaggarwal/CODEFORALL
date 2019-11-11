#include <iostream>
using namespace std;
#define ll long long int
bool isValidConfig(ll books[], ll bookno, ll students, ll mid)
{
	int student = 1;
	ll currpages =0;
	for(int i=0; i<bookno; ++i)
	{
		if(currpages+books[i]>mid)
		{
			student++;
		}
		else
		{
			currpages+=books[i];
		}
		if(student >students)
		{
			return false;
		}
	}
	return true;
}
ll binarysearchonbooks(ll books[], ll bookno, ll students)
{
	ll totalpages=0;
	ll s=0;
	ll e=0;
	for(int i=0; i<bookno;i++)
	{
		totalpages += books[i];
	}
	s = books[bookno-1];
	e = totalpages;
	ll finalans=0;
	while(s<=e)
	{
		ll mid = (s+e)/2;
		if(isValidConfig(books, bookno, students, mid))
		{
			e=mid-1;
			finalans = mid;
		}
		else
		{
			s = mid+1;
		}
	}
	return finalans;
}
int main()
{
	ll n; //no of books
	cin>>n;
	ll m; //no of students
	cin>>m;
	ll books[n];
	for(int i=0; i<n; ++i)
	{
		cin>>books[i];
	}
	ll ans = binarysearchonbooks(books,n, m );
	cout<<ans;
}
