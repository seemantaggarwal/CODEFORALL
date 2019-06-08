#include<iostream>
#include<cstring>
using namespace std;
void insertion(char arr[])
{int j;
 char key;
	for(int i=1; i<10; i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
void substrings(char a[], int n , int len, string curr="")
{
	if(len>n)
	{
		return;
	}
	cout<<curr<<endl;
	for(int i=len+1; i<=n ;++i)
	{
		curr+=a[i];
		substrings(a, n, i , curr);
		curr = curr.erase(curr.size() - 1); 
	}
}
int main()
{
	char a[20];
	cin>>a;
	int n=strlen(a);
	insertion(a);
	substrings(a , n-1, -1);
	return 0;
}
