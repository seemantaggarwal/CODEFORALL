#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	int cnt[64]={0};
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int j=0;
		int num=arr[i]
		while(no>0)
		{
			cnt[j]+=(no&1);
			++j;
			no = no>>1;
		}
	}
	int un=0;
	for (int i = 0; i < 64; ++i)
	{
		/* code */
		cnt[i]%=3;
		un+= (cnt[i]*(2^i));
	}
	return 0;
}