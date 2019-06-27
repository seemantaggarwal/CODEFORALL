#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int arr[100];
	int n;
	cin>>n;
	for(int i=0; i<n; ++i)
	{
		cin>>arr[i];
	}
	int arr2[n];
	stack<int> s;
	s.push(0);
	arr2[0]=1;
	for(int i=1; i<n; ++i)
	{
		
		while(s.empty()==false && arr[s.top()]<=arr[i])
		{
			s.pop();
		}
		if(s.empty())
		{
			arr2[i]=i+1;
		}
		else
			arr2[i]=i-s.top();
		s.push(i);
	}
	for(int i=0; i<n; ++i)
	{
		cout<<arr[i]<<"-->"<<arr2[i]<<endl;
	}

}
