#include<iostream>
using namespace std;
int fibo(int n)
{	int fib;
	if(n<=1)
	{
		return n;	//agar n=1 ya zero hai th mri term bhi toh vahi hai isliye as it is return krdiya
	}
	else{
	return (fibo(n-1)+ fibo(n-2));
	}
}
int main()
{
	int fib,ans;
	cout<<"enter the number of terms";
	cin>>fib;
	for(int i=0;i<fib;i++)
	{
		ans=fibo(i);
		cout<<ans;
	}
	ans=fibo(fib);
	cout<<ans;
	return 0;
}
