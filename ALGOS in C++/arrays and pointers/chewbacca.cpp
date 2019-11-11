#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	/* code */
	string num;
	getline (cin, num);
	int i = 0;
	while(num[i]!='\0')
	{
        if(i==0 && 9 - (num[i] - '0') <(num[i] - '0') && (9- (num[i]-'0')) + '0' !='0')
        {
            num[i]= (9- (num[i]-'0')) + '0';
        }
		if(9 - (num[i] - '0') <(num[i] - '0') && i!=0)
		{
			num[i]= (9- (num[i]-'0')) + '0';
		}
        ++i;
	}
	cout<<num;
	return 0;
}