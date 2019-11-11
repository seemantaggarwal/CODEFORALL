#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr1[n];
	int m;
	for(int i=0; i<n;++i)
	{
		cin>>arr1[i];
	}
	cin>>m;
	int arr2[m];
	for(int i=0; i<m;++i)
	{
		cin>>arr2[i];
	}
	int sumarr[9]= {0};
	int carry=0;
	int size3;
	int size1 = n-1;
	int size2 = m-1;
	int finalsize;
	if(m>n)
	{
		size3=m;
		finalsize=m;
	}
	
	else
	{
		 size3= n;
		 finalsize=n;
	}
    for(int i=0; i<finalsize-1;++i)
		{
			cout<<sumarr[i];
		}
        cout<<endl;
	while(size1>=0 && size2>=0)
	{
		int sum;
		sum = arr1[size1] + arr2[size2]+carry;
		sumarr[size3] += (sum%10);
		carry = sum/10;
		size1--;
		size3--;
		size2--;
	}
	if(size1>=0)
	{
		while(size1>=0)
		{
		int sum = arr1[size1] +carry;
		sumarr[size3] += sum%10;
		carry = sum/10;
		size1--;
		size3--;

		}
	}
	if(size2>=0)
	{
		while(size2>=0)
		{
		int	sum = arr2[size2] +carry;
		sumarr[size3] += sum%10;
		carry = sum/10;
		size2--;
		size3--;

		}
	}
	if(carry)
	{
		sumarr[size3] = carry;
		for(int i = 0; i<=finalsize; ++i)
		{
			cout<<sumarr[i];
		}
	}
	else
	{
		for (int i = 0; i < finalsize-1; ++i)
        sumarr[i] = sumarr[i + 1];
		for(int i=0; i<=finalsize-1;++i)
		{
			cout<<sumarr[i];
		}
	}


}