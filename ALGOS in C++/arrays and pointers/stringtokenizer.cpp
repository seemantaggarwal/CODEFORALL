#include<iostream>
#include<cstring>
using namespace std;
char *mystrtok(char str[], char delim)
{
	static char *input =  NULL;
	if(str!=NULL)
	{
		input = str;
	}
	if(input==NULL)
	{
		return NULL;
	}
	char  *ouput = new char[strlen(input) + 1];
	int i;
	for(i=0; input[i]!='\0'; ++i)
	{
		if(input[i]!=delim)
		{
			ouput[i] = input[i];
		}
		else
		{
			ouput[i] = '\0';
			input+=(i+1);
			return ouput;
		}
	}
	ouput[i]='\0';
	input = NULL;
	return ouput;
}
int main()
{
	char str[]="hello i am seemant aggarwal";
	char *ptr;
	ptr=str;
	cout<<*ptr<<" 1 "<<endl;
	ptr =strtok(str, " ");
	cout<<*ptr<<" 2 "<<endl;
	cout<<ptr<<" 3 "<<endl;
	while(ptr!=NULL)
	{
		ptr =  strtok(NULL, " ");
		cout<<ptr<<" loop "<<endl;
	}
	
	return 0;
}
