#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
bool ispalindrome(char str[], int len, int left =0)
{
	if(len == 1 || len==0)
	{
		return true;
	}
	if(len<=left)
	{
		return true;
	}
	if(str[left] == str[len])
	{
		return ispalindrome(str, len-1, left+1);
	}
	else
	{
		return false;
	}
}
int main()
{
	char str[50];
    cin>>str; 	
    bool ispal =  ispalindrome(str, strlen(str)-1);
	if(ispal)
	{
		cout<<"is palindrome";
	}
	else
	{
		cout<<"not palindrome";
	}
	return 0;
}