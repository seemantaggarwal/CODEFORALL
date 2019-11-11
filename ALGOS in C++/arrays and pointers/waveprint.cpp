#include<iostream>
using namespace std;
int main()
{
	int arr[10][10];
	int row=0;
	int col=0;
	cin>>row>>col;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"ROWWISE"<<endl;
	for(int i=0;i<row;i++)
	{
        if(i%2==0)
        {
            for(int j=0;j<col;j++)
                cout<<arr[i][j]<<", ";
        }    
        else
        {
            for(int j=row-1;j>=0;j--)
            {
                
                cout<<arr[i][j]<<", ";
            }
        }
        cout<<endl;
	}
cout<<"END"<<endl;
cout<<"COLWISE"<<endl;
for(int j=0;j<col;j++)
	{
        if(j%2==0)
        {
            for(int i=0;i<row;i++)
                cout<<arr[i][j]<<", ";
        }    
        else
        {
            for(int i=row-1;i>=0;i--)
            {
                
                cout<<arr[i][j]<<", ";
            }
        }
        cout<<endl;
	}
return 0;

}
