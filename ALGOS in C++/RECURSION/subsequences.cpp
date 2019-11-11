#include <iostream>
using namespace std;
void subsequence(char a[], char o[], int i, int j)
{
	if(a[i]=='\0')
	{
		o[i]='\0';
		cout<<o<<endl;
		return;
	}
	o[j]=a[i];
	subsequence(a,o,i+1,j+1);
	subsequence(a,o,i+1,j);
}
int main(int argc, char const *argv[])
{
	/* code */
	char a[20];
	cin>>a;
	char out[20];
	subsequence(a,out,0,0);
	return 0;
}