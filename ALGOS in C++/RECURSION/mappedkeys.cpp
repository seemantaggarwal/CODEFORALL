#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;
char keys[]={" ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
void printnums(int n,int ctr, int j)
{
	if(n==0)
	{
		return;
	}
	else
	{
		cout<<n<<endl;
		if(n/10)
			cout<<n%10<<endl;
		if(n-(int(n/pow(10,j))*int(pow(10,j)))&&n/(int(pow(n,(ctr+1)/2))))
		{
			cout<<n-(int(n/pow(10,j))*int(pow(10,j)))<<endl;
		}
		printnums(n/10,ctr,j-1);
	}
}
void printchars(char num[], int n, int i, string curr="   ")
{
	if(i>n)
	{
		cout<<curr<<endl;
		return;
	}
	else if(n==0)
	{
		cout<<keys[num[0]-'0']<<endl;
		return;
	}
	if(num[i]!='0' || num[i]!='\0')
	{
		curr[i]=keys[num[i]-'0'];
		printchars(num,n,i+1,curr);
	}
	if(((num[i]-'0')*10 + (num[i+1]-'0'))<=26 && i+1<=n && num[i]!='0' && num[i]!='\0')
	{
		curr[i]=keys[((num[i]-'0')*10 + (num[i+1]-'0'))];
		printchars(num,n,i+2,curr);
	}
	return;

}
int main(int argc, char const *argv[])
{
	/* code */
	/*int n;
	cin>>n;
	
	int num=n;
	int ctr=0;
	while(num)
	{
		ctr++;
		num=num/10;
	}
	int j=ctr;*/
	//printnums(n,ctr-1,j-1);
	char a[20];
	cin>>a;
	printchars(a,strlen(a)-1,0);
	return 0;
}
