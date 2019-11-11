#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void shuffle(int arr[], int s, int e)
{
	srand(time(NULL))
	int i,j,temp;
	for(int i=e,i>0;--i)
	{
		j=rand()%(i+1);
		swap(arr[i], arr[j]);
	}
}
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
	shuffle(a,0,n-1);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i];
	}	
	return 0;
}