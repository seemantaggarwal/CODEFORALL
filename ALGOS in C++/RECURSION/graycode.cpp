#include<iostream>
using namespace std;
void graycode(int n,int arr[], int& i)
{
	/* pushes the gray code in the array and adjusts the value of i such that
	new code can be placed at that index*/
	if(n==0)
	{
		arr[i]=0;
		i++;
		return;
	}
	graycode(n-1, arr, i);
	for(int j=i-1; j>=0; --j)
	{
		int curr=arr[j];
		curr= curr | (1<<(n-1));
		arr[i] = curr;
		++i;
	}

}
int main()
{
	int n;
	cin>>n;
	int arr[100];
	int i=0;
	graycode(n,arr, i);
	for(int j=0; j<i; ++j)
	{
		cout<<arr[j]<<endl;
	}
	return 0;
}
