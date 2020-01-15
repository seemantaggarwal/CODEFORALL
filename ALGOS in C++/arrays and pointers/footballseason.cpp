#include<iostream>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
	/* code */
	ll n,p,w,d;
	cin>>n>>p>>w>>d;
	ll s=0;
	ll e=n;
	ll mid;
/*	int x=0;
	if(w*n<p)
	{
		x=-1;
	}
	if(p<d && p<w)
	{
		x=-1;
	}
	int ctr=0;
	while(s<e)
	{
		mid= (s+e)/2;
		if(mid*w>p)
		{
			++ctr;
			cout<<ctr;
			cout<<"if 1"<<endl;
			e = mid-1;
		}
		else if((mid*w) + (n-mid)*d<p )
		{
			++ctr;
			cout<<ctr;
			cout<<"if 2"<<endl;
			s=mid+1;
		}
		else if((p-mid*w)%d==0 && mid + (p-mid*w)/d <=  n)
		{
			++ctr;
			cout<<ctr;
			cout<<"if 3"<<endl;
			break;
		}
		else if((p-mid*w)%d==0 && mid + (p-mid*w)/d > n)
		{
			++ctr;
			cout<<ctr;
			cout<<"if 4"<<endl;
			e=mid-1;
		}
		/*else
		{
			++ctr;
			cout<<ctr;
			cout<<"if 5"<<endl;
			s=mid+1;
		}*/
		/*else if((p-mid*w)%d!=0 && (mid*w)%d > w%d)
		{
			++ctr;
			cout<<ctr;
			cout<<"if 5"<<endl;
			e=mid-1;
		}
		else
		{
			++ctr;
			cout<<ctr;
			cout<<"if 6"<<endl;
			s=mid+1;
		}
	}*/
	ll draws;
	draws = (p-mid*w)/d;
	ll losses = n - draws - mid;
	if(losses<0 || x==-1|| mid*w + draws*d<p)
	{
		cout<<"-1";
	}
	else
	{
		cout<<mid<<" "<<draws<<" "<<losses;
	}
	return 0;
}
