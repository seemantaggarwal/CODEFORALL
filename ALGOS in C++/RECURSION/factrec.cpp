#include <iostream>
using namespace std;
int factorial(int num)
{
	if(num==1 || num==0)
	{
		return num;
	}
	else
	{
		num=num*factorial(num-1);
		return num;
	}
}
int main()
{
	int num1, result;
	cout<<"enter the number";
	cin>>num1;
	result=factorial(num1);
	cout<<result;
	return 0;
}
