#include<iostream>
#include <cstring>
using namespace std;
char keypad[][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV", "XYZ"};
void printkeys(char in[], char out[], int i, int j)
{
	if(in[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	int digit = in[i]-'0';
	if(digit==1||digit==0)
	{
		printkeys(in, out,i+1,j);

	}
	for (int k = 0; keypad[digit][k]!='\0'; ++k)
	{
		/* code */
		out[j]=keypad[digit][k];
		printkeys(in, out,i+1,j+1);
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	char in[100];
	char out[100];
	cin>>in;
	printkeys(in, out,0,0);
	return 0;
}