#include <iostream>
#include<cstring>
using namesapce std;
int stringToNumber(char input[], int last){
	//Base Case
	if(last == 0){
		return input[last] - '0';
	}
	//Recursive Call
	int smallAns = stringToNumber(input,last-1);       
	int a = input[last] - '0';
	return smallAns * 10 + a;
}
int main(int argc, char const *argv[])
{
	/* code */
	char a[20];
	cin>>a;
	int len=strlen(a);
	int ans = stringToNumber(a, len);
	return 0;
}