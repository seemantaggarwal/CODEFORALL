#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int totstuds, disccop, mincoup, addcop;
	cin>>totstuds>>disccop>>mincoup>>addcop;
	int start = 0;
	int end = totstuds;
	int finalans=0;
	int mid;
	while(start<=end)
	{
		mid = (start+end)/2;
		if((totstuds- mid)*addcop  + disccop < (mid)*mincoup)
		{
			end=mid-1;
		}
		else if((totstuds- mid)*addcop  + disccop > (mid)*mincoup)
		{
			start = mid+1;
		}
		else
		{
			finalans=mid;
			start = mid+1;
		}
	}
	cout<<finalans;
	return 0;
}
