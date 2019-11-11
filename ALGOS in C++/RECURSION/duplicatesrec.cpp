#include <iostream>
#include<cstring>
using namespace std;
void duplicates(char a[], int n, char input[], int i=0, int j=0)
{
	if(i==n+1)
	{
		cout<<input;
		return;
	}
	if(a[i]==a[i-1])
	{
		
		input[j+1]=a[i];
		input[j]='*';
		duplicates(a,n, input,i+1,j+2);
	}
	else
	{
		input[j]=a[i];
		duplicates(a,n, input,i+1,j+1);
	}
	
}
int main(int argc, char const *argv[])
{
	/* code */
	char a[20];
	cin>>a;
	int len=strlen(a);
	char output[20];
	duplicates(a,len, output);
	return 0;
}
