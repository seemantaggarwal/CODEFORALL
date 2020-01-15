#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int arr[n];
    int k;
	cin>>k;
    int start ;
            int end;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	int countzero = 0;
	int i=0;
	int j=0;
	int max = 0,len=0;
	while(i<n && j<n)
	{
		if(arr[j] == 1)
		{
			//j++;
		}
		else if(arr[j] == 0)
		{//cout<<k;
			countzero++;
			if(countzero<=k)
			{
				//j++;
			}
            else
            {
				while(countzero>k)
				{
					//i++;
					if(arr[i++] == 0)
					{
                        //cout<<i;
                        //.cout<<countzero;
						countzero--;
					}
				}
                //j++;
            }
		}
        len = j-i+1;
        //cout<<j<<i;
		if(len>max)
		{
			max = len;
             start = i;
             end = j;
		}
        j++;
	}
    for(int i= start ; i<=end; ++i)
    {
        arr[i]= 1;
    }
	cout<<max<<endl;
    for(int i=0; i<n; ++i)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}